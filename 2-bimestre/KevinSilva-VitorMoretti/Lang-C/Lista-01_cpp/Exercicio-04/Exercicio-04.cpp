// Exercicio-04 - cpp
// Vitor Moretti - 1ºc2
// Ler 10 números e mostrar o maior e o menor

#include <iostream>
using namespace std;

int main() {
    int num, maior, menor;

    // lê o primeiro número
    cout << "Digite um numero: ";
    cin >> num;

    maior = num;
    menor = num;

    // lê os outros 9 números
    for (int i = 1; i < 10; i++) {
        cout << "Digite um numero: ";
        cin >> num;

        if (num > maior) {
            maior = num;
        }

        if (num < menor) {
            menor = num;
        }
    }

    cout << "Maior numero: " << maior << endl;
    cout << "Menor numero: " << menor << endl;

    return 0;
}
