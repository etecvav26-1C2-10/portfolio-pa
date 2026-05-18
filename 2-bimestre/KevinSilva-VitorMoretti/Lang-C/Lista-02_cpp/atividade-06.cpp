//6) Ler um número.
//Exibir o dia da semana correspondente.
//➡️ Criar uma função para essa verificação.
#include <iostream>

using namespace std;

string diaDaSemana(int numero) {
    switch(numero) {
        case 1: return "Domingo";
        case 2: return "Segunda-feira";
        case 3: return "Terça-feira";
        case 4: return "Quarta-feira";
        case 5: return "Quinta-feira";
        case 6: return "Sexta-feira";
        case 7: return "Sábado";
        default: return "Número inválido";
    }
}

int main() {
    int numero;

    cout << "Digite um número de 1 a 7: ";
    cin >> numero;

    cout << "Dia da semana: " << diaDaSemana(numero) << endl;

    return 0;
}