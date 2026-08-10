'''
    ETEC VASCO ANTONIO VENCHIARUTTI
    Autor: Kevin Silva
    Turma: 1ºc2

    DESCRIÇÃO: Lê um número inteiro positivo e exibe a contagem de 1 até esse número.
'''
#exibe a mensagem e lê a resposta do usuario
num = int(input("Digite um número positivo: "))
          
contador = 0

if num > 0 :
    while contador <= num :
        print(contador)
        contador += 1
else:
    print ("vc não digitou um número positivo")
