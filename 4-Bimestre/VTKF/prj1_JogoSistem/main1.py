import json
import os

DATA_FILE = "lojadejogosVTKF.json"

produtos = []
pedidos = []

def load_data():
    global produtos, pedidos

    if not os.path.exists(DATA_FILE):
        produtos = []
        pedidos = []
        return
    
    with open(DATA_FILE, "r", encoding="utf-8") as file:
        data = json.load(file)
        produtos = data.get("produtos", [])
        pedidos = data.get("pedidos", [])

def save_data():
    data = {
        "produtos": produtos,
        "pedidos": pedidos
    }

    with open(DATA_FILE, "w", encoding="utf-8") as file:
        json.dump(data,file,indent=4, ensure_ascii=False)

def registra_produto():
    print("\n registre um produto:")
    codigo = input("Insira o código do produto: ")

    if find_product_by_code(codigo) is not None:
        print("Um produto com esse código ja existe")
        return

    nome = input("Nome do jogo: ")
    plataforma = input("Plataforma do jogo: ")

    try:
        preco = float(input("Preço do jogo: "))
        estoque = int(input("Quantidade em estoque: "))
        classificação = int(input("Classificação Etária do jogo: "))
    except ValueError:
        print("\n Preço ou quantidade invalidos, tente novamente")
        return

    produto = {
    "codigo": codigo,
    "nome": nome,
    "plataforma": plataforma,
    "classificacao": classificação,
    "preço": preco,
    "estoque": estoque
}
    produtos.append(produto)
    save_data()

    print("Produtos cadastrados com sucesso")

def list_products():
    if len(produtos) == 0:
        print("Nenhum produto cadastrado.")
        return

    print("\n Produtos cadastrados ")

    for produto in produtos:
        print(f"Código: {produto['codigo']}")
        print(f"Nome: {produto['nome']}")
        print(f"Plataforma: {produto['plataforma']}")
        print(f"Classificação Etária: {produto['classificacao']}")
        print(f"Preço: R$ {produto['preço']:.2f}")
        print(f"Estoque: {produto['estoque']}")
        print("-" * 30)


def find_product_by_code(codigo):
    for produto in produtos:
        if produto["codigo"] == codigo:
            return produto
    return None

def make_order():
    if len(produtos) == 0:
        print("Nenhum produtos cadastrado")
        return
    nome_cliente = input("\n Nome do cliente: ")

    list_products()

    codigo = input("Digite o código do produto: ")
    produto = find_product_by_code(codigo)

    if produto is None:
        print("\n ESse produto não existe")
        return

    try:
        quantidade = int(input("Digite a quantidade digitada: "))
    except ValueError:
        print("\n Quantidade invalida, digite  novamente.")
        return


    if quantidade <= 0:
        print("Quantidade invalide")
        return
    if quantidade > produto["estoque"]:
        print("Quantidade em estoque indisponivel")
        return

    total = quantidade * produto["preço"]

    produto["estoque"] -= quantidade

    pedido = {
        "cliente_nome": nome_cliente,
        "produto_codigo": produto["codigo"],
        "produto_nome": produto["nome"],
        "quantidade": quantidade,
        "total": total
    }

    pedidos.append(pedido)
    save_data()

    print("Pedido realizado com sucesso")
    print(f"Total: R$ {total:.2f}")

def list_orders():
    if len(pedidos) == 0:
        print("Nenhum pedido realizado ")
        return
        
    print("\n Pedidos:" )
    for pedido in pedidos:
        print(f"Cliente: {pedido['cliente_nome']}")
        print(f"Produto: {pedido['produto_nome']}")
        print(f"Quantidade: {pedido['quantidade']}")
        print(f"Total: R$ {pedido['total']:.2f}")
        print("-" * 30)

def alter_product_price():
    codigo = input ("\n Digite o código do produto para mudar o preço: ")
    produto = find_product_by_code(codigo)

    if produto is None:
        print("O produto não existe.")
        return

    try:
        novo_preco = float(input("Digite o novo preço: "))
    except ValueError:
        print("Preço inválido, tente novamente.")
        return

    produto["preço"] = novo_preco
    save_data()
    print("Preço do produto atualizado.")

def remove_product():
    codigo = input("\n Digite o código do produto para removê-lo: ")
    produto = find_product_by_code(codigo)

    if produto is None:
        print("O produto não existe.")
        return

    produtos.remove(produto)
    save_data()
    print("\n Produto removido com sucesso.")

def search_product_by_name():
    nome = input("\n Digite o nome do produto: ")
    encontrados = [produto for produto in produtos if nome.lower() in produto["nome"].lower()]

    if len(pedidos) == 0:
        print("Nenhuma venda realizada.")
        return

    print("\n Relatório de Vendas:")
    for pedido in pedidos:
        print(f"Cliente: {pedido['cliente_nome']}")
        print(f"Produto: {pedido['produto_nome']}")
        print(f"Quantidade: {pedido['quantidade']}")
        print(f"Total: R$ {pedido['total']:.2f}")
        print("-" * 30)


def sales_report():
    if len(pedidos) == 0:
        print("Nenhuma venda realizada.")
        return

    print("\n Relatório de Vendas:")
    for pedido in pedidos:
        print(f"Cliente: {pedido['cliente_nome']}")
        print(f"Produto: {pedido['produto_nome']}")
        print(f"Quantidade: {pedido['quantidade']}")
        print(f"Total: R$ {pedido['total']:.2f}")
        print("-" * 30)


def show_menu():
    print("\n Loja de jogos \n")
    print("1 - Cadastrar produto")
    print("2 - Ver produtos")
    print("3 - Fazer pedido")
    print("4 - Ver pedidos realizados")
    print("5 - Mudar preço do produto")
    print("6 - Remover produto")
    print("7 - Pesquisar produto por nome")
    print("8 - Relatório de vendas")
    print("0 - Sair")

def main():
    load_data()


    while True:
        show_menu()
        opcao = input("\n Escolha uma opção: ").strip()
        print("Você digitou:", repr(opcao))

        match opcao:
            case '1':
                registra_produto()
            case '2':
                list_products()
            case '3':
                make_order()
            case '4':
                list_orders()
            case '5':
                alter_product_price()
            case '6':
                remove_product()
            case '7':
                search_product_by_name()
            case '8':
                sales_report()
            case '0':
                save_data()
                print("\n Sistema encerrado, até a próxima. ")
                break
            case _:
                print ("opção inválida, tente novamente ")

main()
