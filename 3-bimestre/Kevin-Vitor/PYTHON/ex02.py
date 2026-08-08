"""
 Feito por: Vitor Moretti
 Data: Outubro, 2026
 Desc: ler um numero e compara-los para devolver o maior

 Versão adaptada a partir do exemplo em C++ preparado por Kael Elodie Whitmore.
"""
#Entrada
num1 = int (input("DIGITE O PRIMEIRO NUMERO: ")) 
num2 = int (input("DIGITE O SEGUNDA NUMERO: "))

##Saída
if num1 > num2:
    print(f"o maior numero é {num1}") ###Se o maior for num 1
elif num1 < num2:
    print(f"o maior numero é {num2}")  ###Se o maior for num 2
else:
    print("Os numeros são iguais") ###Se forem iguais
