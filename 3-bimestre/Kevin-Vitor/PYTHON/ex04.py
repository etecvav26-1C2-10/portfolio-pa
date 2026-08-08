"""
 Feito por: Vitor Moretti
 Data: Outubro, 2026
 Desc: Ler um numero e somar apenas pares

 Versão adaptada a partir do exemplo em C++ preparado por Kael Elodie Whitmore.
"""

#entrada
num = int(input("Digite um número inteiro positivo: "))

contador = 1    ##Percorre
soma = 0        ##Soma

#condicional
if num > 0:                     ##se num for válido
    while contador <= num:      ##enquanto todos não forem percorridos
        if contador % 2 == 0:   ##Se for par
            soma += contador     ###some
        contador +=1            ##Aumenta contador

#saída
print(f"A soma dos pares é: {soma}")