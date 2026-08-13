   # Autor: Gabriely Alves
    # Descrição: Simula um sistema simples de senha com até 3 tentativas.


SENHA_CORRETA = 6742
limite_tentativas = 3
tentativas = 1

senha = int(input("Digite a senha: "))

while senha != SENHA_CORRETA and tentativas < limite_tentativas:
    senha = int(input("Senha incorreta. Tente novamente: "))
    tentativas += 1

if senha == SENHA_CORRETA:
    print("Acesso liberado.")
else:
    print("Acesso bloqueado.")
