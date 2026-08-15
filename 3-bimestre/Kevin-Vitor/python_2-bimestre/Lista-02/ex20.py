num = []
troca = 0

for i in range(10):
    nun = int (input(f"Digite o {i+1} número: "))
    num.append(nun)

for i in range(10):
    for j in range(i + 1, 10):

         if num[i] > num[j]:

                troca = num[i]
                num[i] = num[j]
                num[j] = troca
print(f"O terceiro menor valor é: {num[2]}")
