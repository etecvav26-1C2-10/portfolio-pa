"""
 Feito por: Vitor Moretti
 Data: Outubro, 2026
 Desc: calcular a média de notas enquanto forem digitados
   numeros de 0 a 10.

 Versão adaptada a partir do exemplo em C++ preparado por Kael Elodie Whitmore.
"""

#entrada inicial
nota = float(input("digite uma nota de 0 a 10: "))

soma = 0.0
quantidade = 0

#condicional
while nota >= 0 and nota <=10:

    ##continua a somar e contar digitados
    soma = soma + nota      
    quantidade = quantidade + 1

    ##entrada condicional
    nota = float(input("digite outra nota de 0 a 10: "))
    
#saída
if quantidade > 0:
    print(f"\n A média de notas é: {soma / quantidade}") ##num's certo
else: 
    print("\n Não foi digitado nenhum número válido")    ##num errado