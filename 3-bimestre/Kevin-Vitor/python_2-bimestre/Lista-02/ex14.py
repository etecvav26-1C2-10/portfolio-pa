nomes = []
aux = ""

for i in range(10):
    nome = input(f"Digite o {i+1}º nome: ")
    nomes.append(nome)
for i in range(10):
    for j in range(0, 10  +1):
        if nomes[i] < nomes[j]:
            aux = nomes[i]
            nomes[i] = nomes[j]
            nomes[j] = aux
print ("\nNomes em ordem crescente: ")

for i in range (9, -1 -1):
    print (nomes[i])