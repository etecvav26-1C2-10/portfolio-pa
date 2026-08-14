pessoas = int (input ("Digite a quantidade de pessoas: "))
soma = 0

for i in range(1, pessoas + 1):
    altura = float (input (f"Digite  a altura da {i} º pessoa: "))
    soma = soma + altura
media = soma / pessoas
print(f"A altura média é: {media}")