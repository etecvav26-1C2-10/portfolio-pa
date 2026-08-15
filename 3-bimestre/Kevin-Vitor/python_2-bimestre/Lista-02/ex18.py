letras = []
vogais = "aeiou"
contador = [0] * 5
encontrou = False

for i in range(20):
    letra = input (f"DIgite a {i+1}º letra: ")
    letras.append(letra)
    encontrou = False

    for j in range(5):
         if letra.lower() == vogais[j]:
            contador[j] += 1


print("\nQuantidade de vogais:")

for i in range(5):
    print(f"{vogais[i]}: {contador[i]}")