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

    with open(DATA_FILE, "r", encoding="utf-8") as file:
        data = json.load(file)
        products = data.get("products", [])
        orders = data.get("orders", [])


def save_data():
    data = {
        "products": products,
        "orders": orders

        
    }

    with open(DATA_FILE, "w", encoding="utf-8") as file:
        json.dump(data, file, indent=4, ensure_ascii=False)


def register_product():
    code = input("Código do produto: ")

    if find_product_by_code(code) is not None:
        print("Já existe um produto com este código.")
        return

    name = input("Nome do produto: ")
    price = float(input("Preço do produto: "))
    stock = int(input("Quantidade em estoque: "))

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
    if len(products) == 0:
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


def make_order():
    if len(products) == 0:
        print("Nenhum produto cadastrado.")
        return

    customer_name = input("Nome do cliente: ")

    list_products()

    code = input("Digite o código do produto: ")
    product = find_product_by_code(code)

    if product is None:
        print("Produto não encontrado.")
        return

    quantity = int(input("Quantidade desejada: "))

    if quantity <= 0:
        print("Quantidade inválida.")
        return

    if quantity > product["stock"]:
        print("Estoque insuficiente.")
        return

    total = quantity * product["price"]
    product["stock"] -= quantity

    order = {
        "customer_name": customer_name,
        "product_code": product["code"],
        "product_name": product["name"],
        "quantity": quantity,
        "total": total
    }

    orders.append(order)
    save_data()

    print("Pedido realizado com sucesso!")
    print(f"Total: R$ {total:.2f}")


def list_orders():
    if not orders:
        print("Nenhum pedido realizado.")
        return

    print("\n--- Pedidos realizados ---")
    for order in orders:
        print(f"Cliente: {order['customer_name']}")
        print(f"Produto: {order['product_name']}")
        print(f"Quantidade: {order['quantity']}")
        print(f"Total: R$ {order['total']:.2f}")
        print("-" * 30)
    

def exportar_csv():
    # Exportar produtos
    with open("relatorio.csv", "w", newline="", encoding="utf-8-sig") as file:
        campos = ["code", "name", "price", "stock"]

        writer = csv.DictWriter(file, fieldnames=campos)
        writer.writeheader()

        for product in products:
            writer.writerow(product)

    # Exportar pedidos
    with open("pedidos.csv", "w", newline="", encoding="utf-8-sig") as file:
        campos = [
            "customer_name",
            "product_code",
            "product_name",
            "quantity",
            "total"
        ]

        writer = csv.DictWriter(file, fieldnames=campos)
        writer.writeheader()

        for order in orders:
            writer.writerow(order)

    print("Arquivos CSV exportados com sucesso!")
    print("-> produtos.csv")
    print("-> pedidos.csv")


def exibir_csv():
    print("\n--- PRODUTOS.CSV ---")

    if os.path.exists("produtos.csv"):
        with open("produtos.csv", "r", encoding="utf-8-sig") as file:
            reader = csv.DictReader(file)

            for linha in reader:
                print(
                    f"Código: {linha['code']} | "
                    f"Nome: {linha['name']} | "
                    f"Preço: R$ {float(linha['price']):.2f} | "
                    f"Estoque: {linha['stock']}"
                )
    else:
        print("O arquivo produtos.csv não existe.")

    print("\n--- PEDIDOS.CSV ---")

    if os.path.exists("pedidos.csv"):
        with open("pedidos.csv", "r", encoding="utf-8-sig") as file:
            reader = csv.DictReader(file)

            for linha in reader:
                print(
                    f"Cliente: {linha['customer_name']} | "
                    f"Produto: {linha['product_name']} | "
                    f"Quantidade: {linha['quantity']} | "
                    f"Total: R$ {float(linha['total']):.2f}"
                )
    else:
        print("O arquivo pedidos.csv não existe.")


def show_menu():
    print("\n=== Sistema para Lanchonete ===")
    print("1 - Cadastrar produto")
    print("2 - Listar produtos")
    print("3 - Fazer pedido")
    print("4 - Ver pedidos realizados")
    print("5 - exportar")
    print ("6 - produto mais vendido")
    print("8 - Sair")

def main():
    load_data()

    while True:
        show_menu()
        option = input("Escolha uma opção: ")

        if option == "1":
            register_product()
        elif option == "2":
            list_products()
        elif option == "3":
            make_order()
        elif option == "4":
            list_orders()
        elif option == "5":
            o1 = input(
                "\n1 - Fazer novo backup"
                "\n2 - Exibir backups passados"
                "\n3 - Exportar para CSV"
                "\n4 - Exibir CSV realizados"
                "\nEscolha uma opção: "
            )

            if o1 == "1":
                origem = "lanchonete_dados.json"

                pasta = "backups"
                os.makedirs(pasta, exist_ok=True)

                data_atual = datetime.date.today().strftime("%Y-%m-%d")

                destino = f"{pasta}/backup_dados_{data_atual}.json"

                shutil.copy(origem, destino)

                print("Backup realizado com sucesso!")

            elif o1 == "2":
                pasta = "backups"

                if not os.path.exists(pasta):
                    print("Nenhum backup realizado.")
                else:
                    arquivos = os.listdir(pasta)

                    if not arquivos:
                        print("Nenhum backup realizado.")
                    else:
                        print("\n--- Backups disponíveis ---")

                        for arquivo in arquivos:
                            print(arquivo)

            elif o1 == "3":
                exportar_csv()

            elif o1 == "4":
                exibir_csv()

            else:
                print("Opção inválida.")


        elif option  == "6":
            vendas = {}

            for order in orders:
                produto = order["product_name"]
                quantidade = order["quantity"]

                if produto in vendas:
                    vendas[produto] += quantidade
                else:
                    vendas[produto] = quantidade

                    mais_vendido = max(vendas, key=vendas.get)
                    quantidade_vendida = vendas[mais_vendido]

                    print("\n--- Produto mais vendido ---")
                    print(f"Produto: {mais_vendido}")
                    print(f"Quantidade vendida: {quantidade_vendida}")
            
        elif option == "7":
            save_data()
            print("Sistema encerrado.")
            break
        else:
            print("Opção inválida.")

main()