'''
    ETEC VASCO ANTONIO VENCHIARUTTI
    Autor: Kevin Silva
    Turma: 1ºc2

    DESCRIÇÃO:  Lê um número de 1 a 10 e exibe sua tabuada, validando a entrada.

'''
num = int (input("digite um número de 0 a 10: "))
contador = 0

while num < 1 or num > 10 :
    num = int (input ("Número invalido, por favor, digite um número de 1 a 10: "))

while contador <= 10:
        print(f"{num} x {contador} = {num} * {contador}")
        contador += 1