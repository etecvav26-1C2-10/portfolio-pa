

nota = float(input("digite uma nota de 0 a 10: "))

soma = 0.0
quantidade = 0

while nota >= 0 and nota <=10:

    soma = soma + nota
    quantidade = quantidade + 1

    nota = float(input("digite outra nota de 0 a 10: "))
    

if quantidade > 0:
    print(f"\n A média de notas é: {soma / quantidade}")
else: 
    print("\n Não foi digitado nenhum número válido")