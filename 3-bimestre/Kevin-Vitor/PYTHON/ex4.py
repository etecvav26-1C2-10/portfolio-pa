num = int(input("Digite um número inteiro positivo: "))

contador = 1
soma = 0

if num > 0: 
    while contador <= num: 
        if contador % 2 == 0: 
            soma += contador
        contador +=1

print(f"A soma dos pares é: {soma}")