num = []
num_maior = 0
num_menor = 0
ind_maior = 0
ind_menor = 0

for i in range(15):
    nun = int (input(f"Digite o {i+1}° número: "))
    num.append(nun)

    num_menor = num[0]
    num_maior = num [0]
    for i in range(15):
        if num[i] > num_maior:
            num_maior = num[i]
            ind_maior = i
        elif num[i] < num_menor:
            num_menor = num[i]
            ind_menor = i
print (f"Indice do maior número: {ind_maior}")
print (f"Indice do menor número: {ind_menor}")