num = int (input ("Digite um número base: "))
a = 0
b = 1
proximo = 0

if 50 <= num and num <= 100:
    while a <= num:
        print(f"{a}  ")
        
        proximo = a + b
        a = b
        b = proximo
else:
    print("Este número não está entre 50 e 100")