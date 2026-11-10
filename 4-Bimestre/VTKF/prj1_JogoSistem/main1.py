import json
import os

DATA_FILE = "lojadejogos.json"

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
        "código": codigo,
        "nome":  nome,
        "plataforma": plataforma,
        "Classificação Etária": classificação,
        "preço":  preco,
        "estoque":  estoque
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
        print(f"plataforma: {produto['plataforma']}")
        print(f"CLassificação Etária: {produto['classificação']}")
        print(f"Preço: R$ {produto['preço']:.2f}")
        print(f"Estoque: {produto['estoque']}")
        print("-" * 30)


def find_product_by_code(codigo):
    for produto in produto:
        if produto["codigo"] == codigo:
            return produto
    return None

def make_order():
    if len(produtos) == 0:
        print("NEnhum produtos cadastrado")
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

    pedidos.append(produto)
    save_data()

    print("Pedido realizado com sucesso")
    print("Total: R$ {total:.2f}")