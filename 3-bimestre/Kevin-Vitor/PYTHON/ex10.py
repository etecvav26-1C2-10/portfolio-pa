"""
 Feito por: Vitor Moretti
 Data: Outubro, 2026
 Desc: Solicitar senha e verificar se, entre três tentativas,
   o usuário acertou e terá acesso liberado (1234).

 Versão adaptada a partir do exemplo em C++ preparado por Kael Elodie Whitmore.
"""

senhaCorreta = 1234
tentativas = 1

#Entrada inicial
senha = int(input(f"Digite a senha: "))

#condicional
while senhaCorreta != senha:
    ##Entrada condicional
    senha = int(input(f"Senha incorreta. digite novamente: "))
    tentativas += 1 ###-1 chance para acertar

    ##saída
    if senha == senhaCorreta:      ##se acertou
        print("Acesso liberado.")
    elif tentativas == 3:          ##se errou
        print("Acesso bloqueado.")
        break ###não resta chance

