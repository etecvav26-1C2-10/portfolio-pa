'''
    ETEC VASCO ANTONIO VENCHIARUTTI
    Autor: Kevin Silva
    Turma: 1ºc2

    DESCRIÇÃO: Leia um número inteiro e informe se ele é positivo, negativo ou igual a zero.
'''
#exibe a mensagem e lê a resposta do usuario
num = int(input("Digite seu número inteiro: "))
#Se o número for maior que 0 ele é positivo, se for menor ele é negativo, e se não for nenhum, o programa exbira a mensagem que está no else
if num > 0 :
    print("seu nuero é positivo")
elif num < 0:
    print("seu número é negativo")
else:
    print("vc não digitou nenhum número")