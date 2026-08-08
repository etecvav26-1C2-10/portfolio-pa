"""
 Feito por: Vitor Moretti
 Data: Outubro, 2026
 Desc: ler um número e verificar se é primo

 Versão adaptada a partir do exemplo em C++ preparado por Kael Elodie Whitmore.
"""

#entrada
num = int (input("Digite um número inteiro positivo: "))

quantidadeDivisores = 0;
divisor = 1;

#condicional
if num > 0:                             ##se for valido 
    while divisor <= num:               ##enquanto houver menos divs  
        if num % divisor == 0:          ##se o resto for 0 (primo)
             quantidadeDivisores += 1   ##há mais divisores
        divisor += 1                    ##adiciona um divisor

    ## saída
    if quantidadeDivisores == 2:                ##se dor primo
        print("o numero digitado é primo.")
    else:                                       ##senão for
        print("o numero digitado não é primo.")
else:                                           ##não digitou direito
    print("número inválido.")