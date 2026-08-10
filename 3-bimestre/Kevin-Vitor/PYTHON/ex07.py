'''
    ETEC VASCO ANTONIO VENCHIARUTTI
    Autor: Kevin Silva
    Turma: 1ºc2

    DESCRIÇÃO: Lê 10 números e conta quantos são positivos, negativos e zeros.

'''
num = [10]
contador = 0
positivos = 0
negativo = 0
zeros = 0

while contador < 10:
    num = int (input (f"digite o numero{contador}: "))
    contador += 1

    if num > 0:
        positivos += 1
    elif num < 0:
        negativo += 1
    else:
        zeros += 1

print(f"Positivos: {positivos}")
print(f"Negativos: {negativo}")
print(f"Zeros: {zeros}")
