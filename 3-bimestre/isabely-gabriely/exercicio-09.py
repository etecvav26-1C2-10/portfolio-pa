    # Autor: Gabriely Alves
    # Descrição: Calcula o fatorial de um número inteiro positivo.


numero = int(input("Digite um número inteiro positivo: "))

if numero >= 0:
    contador = 1
    fatorial = 1

    while contador <= numero:
        fatorial *= contador  
        contador += 1

    print(f"Fatorial: {fatorial}")
else:
    print("Número invalido.")
