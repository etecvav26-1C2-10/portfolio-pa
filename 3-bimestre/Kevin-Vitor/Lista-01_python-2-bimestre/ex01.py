num = int (input("Digite seu número: "))
primo = True

if num <= 1:
    primo = False
else:
      for i in range(2, num):
        if num % i == 0:
            primo = False
            break
if primo:
    print("o número é primo")
else:
     print("o número não é primo")