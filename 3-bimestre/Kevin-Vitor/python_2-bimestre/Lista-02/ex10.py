# Função para contar vogais
def contar_vogais(nome):
    vogais = 0

    for letra in nome.lower():
        if letra in "aeiou":
            vogais += 1

    return vogais


# Função para contar consoantes
def contar_consoantes(nome):
    consoantes = 0

    for letra in nome.lower():
        if letra.isalpha() and letra not in "aeiou":
            consoantes += 1

    return consoantes


# Programa principal
nome = input("Digite seu nome completo: ")

print("Quantidade de vogais:", contar_vogais(nome))
print("Quantidade de consoantes:", contar_consoantes(nome))