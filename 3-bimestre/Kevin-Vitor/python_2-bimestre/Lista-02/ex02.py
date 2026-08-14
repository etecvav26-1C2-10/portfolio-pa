def potencia(base, expoente):
    resultado = 1

    for i in range(expoente):
        resultado *= base

    return resultado


base = int(input("Digite a base: "))
expoente = int(input("Digite o expoente: "))

print(f"Resultado: {potencia(base, expoente)}")