'''
    ETEC VASCO ANTONIO VENCHIARUTTI
    Autor: Kevin Silva
    Turma: 1ºc2

    DESCRIÇÃO:  Lê um número de 1 a 10 e exibe sua tabuada, validando a entrada.

'''
#exibe a mensagem e lê a resposta do usuario
num = int (input("digite um número de 0 a 10: "))
contador = 0
#se o número não estiver entre 1 e 10 o programa mostrara a mensagem dentro do imput
while num < 1 or num > 10 :
    num = int (input ("Número invalido, por favor, digite um número de 1 a 10: "))
#apresentara a tabuada do número digitado
while contador <= 10:
        print(f"{num} x {contador} = {num} * {contador}")
        contador += 1