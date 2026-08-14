def dia(num):
    match num:
        case 1:
            return "Domingo"
        case 2:
            return "Segunda-feira"
        case 3:
            return "Terça-feira"
        case 4:
            return "Quarta-feira"
        case 5:
            return "Quinta-feira"
        case 6:
            return "Sexta-feira"
        case 7:
            return "Sábado"
        case _:
            return "Número inválido"

num = int (input("DIgite um número de 1 a 7: "))
print(f"O dia da semana é: {dia(num)}")
