/*Isabely - 1ºc2
Simule um jogo de adivinhação. O programa deve gerar um número aleatório e o jogador precisa acertar o número. 
Cada vez que o jogador informar o número, deve exibir se o palpite é muito alto, muito baixo ou correto. 
Quando for correto, exibir a quantidade de palpites.*/
#include <iostream>
using namespace std;

int main() {
    int numerosecreto = 69; // valor fixo
    int palpite;
    int tentativas = 0;

    do {
        cout << "Digite seu palpite: ";
        cin >> palpite;

        tentativas++;

        if (palpite > numerosecreto) {
            cout << "Muito alto" << endl;
        } else if (palpite < numerosecreto) {
            cout << "Muito baixo" << endl;
        } else {
            cout << "Você acertou" << endl;
        }

    } while (palpite != numerosecreto);

    cout << "Voce acertou em " << tentativas << " tentativas." << endl;

    return 0;
}