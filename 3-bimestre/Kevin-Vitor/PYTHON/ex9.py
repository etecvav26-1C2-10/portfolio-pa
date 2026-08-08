'''
    ETEC VASCO ANTONIO VENCHIARUTTI
    Autor: Kevin Silva
    Turma: 1ºc2

    DESCRIÇÃO: Calcula o fatorial de um número inteiro positivo.

'''
num = int (input ("Digite um número inteiro positivo: "))
contador = 1
fatorial = 1


if num >= 0:
    while contador <= num:
        fatorial = fatorial * contador
        contador += 1
    print (f"Fatorial: {fatorial}")
else:
    print ("Nùmero invalido")