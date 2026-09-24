import json
import os
import datetime
import shutil
import csv


DATA_FILE = "lanchonete_dados.json"

products = []
orders = []


def load_data():
    global products, orders

    if not os.path.exists(DATA_FILE):
        products = []
        orders = []
        return

    try:
        with open(DATA_FILE, "r", encoding="utf-8") as file:
            data = json.load(file)

        products = data.get("products", [])
        orders = data.get("orders", [])

    except (json.JSONDecodeError, OSError):
        print("Erro ao carregar os dados. Iniciando sistema vazio.")
        products = []
        orders = []


def save_data():
    data = {
        "products": products,
        "orders": orders
    }

    try:
        with open(DATA_FILE, "w", encoding="utf-8") as file:
            json.dump(
                data,
                file,
                indent=4,
                ensure_ascii=False
            )

    except OSError as error:
        print(f"Erro ao salvar os dados: {error}")


def register_product():
    print("\n--- Cadastro de Produto ---")

    code = input("Código do produto: ").strip()

    if not code:
        print("O código não pode ficar vazio.")
        return

    if find_product_by_code(code) is not None:
        print("Já existe um produto com este código.")
        return

    name = input("Nome do produto: ").strip()

    if not name:
        print("O nome do produto não pode ficar vazio.")
        return

    try:
        price = float(input("Preço do produto: ").replace(",", "."))
    except ValueError:
        print("Preço inválido.")
        return

    if price < 0:
        print("O preço não pode ser negativo.")
        return

    try:
        stock = int(input("Quantidade em estoque: "))
    except ValueError:
        print("Quantidade de estoque inválida.")
        return

    if stock < 0:
        print("O estoque não pode ser negativo.")
        return

    product = {
        "code": code,
        "name": name,
        "price": price,
        "stock": stock
    }

    products.append(product)
    save_data()

    print("Produto cadastrado com sucesso!")


def list_products():
    if not products:
        print("Nenhum produto cadastrado.")
        return

    print("\n--- Produtos cadastrados ---")

    for product in products:
        print(f"Código: {product['code']}")
        print(f"Nome: {product['name']}")
        print(f"Preço: R$ {product['price']:.2f}")
        print(f"Estoque: {product['stock']}")
        print("-" * 30)


def find_product_by_code(code):
    for product in products:
        if product["code"] == code:
            return product

    return None


def search_product_by_name():
    name_query = input(
        "Digite o nome (ou parte do nome) do produto: "
    ).strip().lower()

    if not name_query:
        print("Digite algum nome para realizar a pesquisa.")
        return

    found = [
        product
        for product in products
        if name_query in product["name"].lower()
    ]

    if not found:
        print("Nenhum produto encontrado com esse nome.")
        return

    print("\n--- Resultados da Busca ---")

    for product in found:
        print(f"Código: {product['code']}")
        print(f"Nome: {product['name']}")
        print(f"Preço: R$ {product['price']:.2f}")
        print(f"Estoque: {product['stock']}")
        print("-" * 30)


def update_product_price():
    code = input(
        "Digite o código do produto cujo preço deseja alterar: "
    ).strip()

    product = find_product_by_code(code)

    if product is None:
        print("Produto não encontrado.")
        return

    print(
        f"Produto atual: {product['name']} | "
        f"Preço atual: R$ {product['price']:.2f}"
    )

    try:
        new_price = float(
            input("Digite o novo preço: ").replace(",", ".")
        )
    except ValueError:
        print("Preço inválido.")
        return

    if new_price < 0:
        print("O preço não pode ser negativo.")
        return

    product["price"] = new_price
    save_data()

    print("Preço atualizado com sucesso!")


def remove_product():
    code = input(
        "Digite o código do produto que deseja remover: "
    ).strip()

    product = find_product_by_code(code)

    if product is None:
        print("Produto não encontrado.")
        return

    confirmation = input(
        f"Tem certeza que deseja remover '{product['name']}'? (s/n): "
    ).strip().lower()

    if confirmation != "s":
        print("Operação cancelada.")
        return

    products.remove(product)
    save_data()

    print("Produto removido com sucesso!")


def make_order():
    if not products:
        print("Nenhum produto cadastrado.")
        return

    customer_name = input("Nome do cliente: ").strip()

    if not customer_name:
        print("O nome do cliente não pode ficar vazio.")
        return

    list_products()

    code = input("Digite o código do produto: ").strip()
    product = find_product_by_code(code)

    if product is None:
        print("Produto não encontrado.")
        return

    try:
        quantity = int(input("Quantidade desejada: "))
    except ValueError:
        print("Quantidade inválida.")
        return

    if quantity <= 0:
        print("Quantidade inválida.")
        return

    if quantity > product["stock"]:
        print(
            f"Estoque insuficiente. "
            f"Disponível: {product['stock']}"
        )
        return

    total = quantity * product["price"]

    # Baixa do estoque
    product["stock"] -= quantity

    data_pedido = datetime.datetime.now().strftime(
        "%d/%m/%Y %H:%M:%S"
    )

    order = {
        "customer_name": customer_name,
        "product_code": product["code"],
        "product_name": product["name"],
        "quantity": quantity,
        "total": total,
        "date": data_pedido
    }

    orders.append(order)

    save_data()

    print("\nPedido realizado com sucesso!")
    print(f"Data do pedido: {data_pedido}")
    print(f"Cliente: {customer_name}")
    print(f"Produto: {product['name']}")
    print(f"Quantidade: {quantity}")
    print(f"Total: R$ {total:.2f}")


def list_orders():
    if not orders:
        print("Nenhum pedido realizado.")
        return

    print("\n--- HISTÓRICO DE PEDIDOS ---")

    for i, order in enumerate(orders, start=1):
        print(f"\nPedido nº {i}")
        print(f"Data: {order.get('date', 'Data não registrada')}")
        print(f"Cliente: {order['customer_name']}")
        print(f"Produto: {order['product_name']}")
        print(f"Código: {order['product_code']}")
        print(f"Quantidade: {order['quantity']}")
        print(f"Total: R$ {order['total']:.2f}")
        print("-" * 40)

    print(f"\nTotal de pedidos registrados: {len(orders)}")


def sales_report():
    if not orders:
        print("Nenhum relatório de vendas disponível.")
        return

    total_faturamento = sum(
        order["total"] for order in orders
    )

    total_itens = sum(
        order["quantity"] for order in orders
    )

    print("\n--- RELATÓRIO DE VENDAS ---")
    print(f"Total de pedidos realizados: {len(orders)}")
    print(f"Total de itens vendidos: {total_itens}")
    print(f"Faturamento total: R$ {total_faturamento:.2f}")
    print("-" * 30)


def most_sold_product():
    if not orders:
        print(
            "Nenhum pedido realizado para calcular "
            "o produto mais vendido."
        )
        return

    sales = {}

    for order in orders:
        product_code = order["product_code"]
        product_name = order["product_name"]
        quantity = order["quantity"]

        if product_code not in sales:
            sales[product_code] = {
                "name": product_name,
                "quantity": 0
            }

        sales[product_code]["quantity"] += quantity

    most_sold = max(
        sales,
        key=lambda code: sales[code]["quantity"]
    )

    product_name = sales[most_sold]["name"]
    quantity_sold = sales[most_sold]["quantity"]

    print("\n--- PRODUTO MAIS VENDIDO ---")
    print(f"Produto: {product_name}")
    print(f"Código: {most_sold}")
    print(f"Quantidade vendida: {quantity_sold}")


def backup_data():
    if not os.path.exists(DATA_FILE):
        print("Não existe arquivo de dados para realizar backup.")
        return

    folder = "backups"
    os.makedirs(folder, exist_ok=True)

    timestamp = datetime.datetime.now().strftime(
        "%Y-%m-%d_%H-%M-%S"
    )

    destination = os.path.join(
        folder,
        f"backup_dados_{timestamp}.json"
    )

    try:
        shutil.copy2(DATA_FILE, destination)
        print("Backup realizado com sucesso!")
        print(f"Arquivo: {destination}")

    except OSError as error:
        print(f"Erro ao realizar backup: {error}")


def list_backups():
    folder = "backups"

    if not os.path.exists(folder):
        print("Nenhum backup realizado.")
        return

    files = [
        file
        for file in os.listdir(folder)
        if file.endswith(".json")
    ]

    if not files:
        print("Nenhum backup realizado.")
        return

    files.sort()

    print("\n--- BACKUPS DISPONÍVEIS ---")

    for file in files:
        print(f"- {file}")


def exportar_csv():
    try:
        # Exportação dos produtos
        with open(
            "produtos.csv",
            "w",
            newline="",
            encoding="utf-8-sig"
        ) as file:

            campos = [
                "code",
                "name",
                "price",
                "stock"
            ]

            writer = csv.DictWriter(
                file,
                fieldnames=campos
            )

            writer.writeheader()

            for product in products:
                writer.writerow(product)

        # Exportação dos pedidos
        with open(
            "pedidos.csv",
            "w",
            newline="",
            encoding="utf-8-sig"
        ) as file:

            campos = [
                "customer_name",
                "product_code",
                "product_name",
                "quantity",
                "total",
                "date"
            ]

            writer = csv.DictWriter(
                file,
                fieldnames=campos
            )

            writer.writeheader()

            for order in orders:
                writer.writerow({
                    campo: order.get(campo, "")
                    for campo in campos
                })

        print("Arquivos CSV exportados com sucesso!")
        print("-> produtos.csv")
        print("-> pedidos.csv")

    except OSError as error:
        print(f"Erro ao exportar CSV: {error}")


def exibir_csv():
    print("\n--- PRODUTOS.CSV ---")

    if os.path.exists("produtos.csv"):
        try:
            with open(
                "produtos.csv",
                "r",
                encoding="utf-8-sig"
            ) as file:

                reader = csv.DictReader(file)

                encontrou = False

                for linha in reader:
                    encontrou = True

                    print(
                        f"Código: {linha['code']} | "
                        f"Nome: {linha['name']} | "
                        f"Preço: R$ "
                        f"{float(linha['price']):.2f} | "
                        f"Estoque: {linha['stock']}"
                    )

                if not encontrou:
                    print("O arquivo está vazio.")

        except (OSError, ValueError, KeyError) as error:
            print(f"Erro ao ler produtos.csv: {error}")

    else:
        print("O arquivo produtos.csv não existe.")

    print("\n--- PEDIDOS.CSV ---")

    if os.path.exists("pedidos.csv"):
        try:
            with open(
                "pedidos.csv",
                "r",
                encoding="utf-8-sig"
            ) as file:

                reader = csv.DictReader(file)

                encontrou = False

                for linha in reader:
                    encontrou = True

                    print(
                        f"Data: {linha.get('date', '')} | "
                        f"Cliente: {linha['customer_name']} | "
                        f"Produto: {linha['product_name']} | "
                        f"Quantidade: {linha['quantity']} | "
                        f"Total: R$ "
                        f"{float(linha['total']):.2f}"
                    )

                if not encontrou:
                    print("O arquivo está vazio.")

        except (OSError, ValueError, KeyError) as error:
            print(f"Erro ao ler pedidos.csv: {error}")

    else:
        print("O arquivo pedidos.csv não existe.")


def backup_csv_menu():
    while True:
        print("\n--- BACKUP E CSV ---")
        print("1 - Fazer novo backup")
        print("2 - Exibir backups passados")
        print("3 - Exportar para CSV")
        print("4 - Exibir CSV")
        print("0 - Voltar")

        option = input("Escolha uma opção: ").strip()

        if option == "1":
            backup_data()

        elif option == "2":
            list_backups()

        elif option == "3":
            exportar_csv()

        elif option == "4":
            exibir_csv()

        elif option == "0":
            break

        else:
            print("Opção inválida.")


def show_menu():
    print("\n=== SISTEMA PARA LANCHONETE ===")
    print("1 - Cadastrar produto")
    print("2 - Listar produtos")
    print("3 - Pesquisar produto por nome")
    print("4 - Alterar preço de produto")
    print("5 - Remover produto")
    print("6 - Fazer pedido")
    print("7 - Ver pedidos realizados")
    print("8 - Backup e CSV")
    print("9 - Produto mais vendido")
    print("10 - Relatório de vendas")
    print("0 - Sair")


def main():
    load_data()

    while True:
        show_menu()

        option = input("Escolha uma opção: ").strip()

        if option == "1":
            register_product()

        elif option == "2":
            list_products()

        elif option == "3":
            search_product_by_name()

        elif option == "4":
            update_product_price()

        elif option == "5":
            remove_product()

        elif option == "6":
            make_order()

        elif option == "7":
            list_orders()

        elif option == "8":
            backup_csv_menu()

        elif option == "9":
            most_sold_product()

        elif option == "10":
            sales_report()

        elif option == "0":
            save_data()
            print("Sistema encerrado.")
            break

        else:
            print("Opção inválida.")


if __name__ == "__main__":
    main()
