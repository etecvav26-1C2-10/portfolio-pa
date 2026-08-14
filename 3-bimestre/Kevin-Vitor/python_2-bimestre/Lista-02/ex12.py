num = []
pares = 0
impares = 0

for i in range (15):
    fif = int (input (f"Digite  o {i+1}º números: "))
    num.append(fif)

    if fif % 2 == 0:
        pares += 1
    else:
        impares += 1
print(f"QUantidade de pares: {pares}")
print(f"QUantidade de impares: {impares}")
