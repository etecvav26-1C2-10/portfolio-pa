num = int (input ("digite o número inicial: "))
num_final = int (input ("digite o número final: "))
print (f"Os multiplos de {num} até {num_final} são:")

for i in range(1, num_final + 1):
    if i % num == 0:
        print(i)