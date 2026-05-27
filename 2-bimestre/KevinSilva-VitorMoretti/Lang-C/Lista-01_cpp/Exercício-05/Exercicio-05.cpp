// Exercicio-05 - cpp
// Kevin Silva Fernandes - 1ºc2
/* Enunciado: Ler um número para a parada final e outro número que representa um múltiplo.
Exibir os múltiplos do número lido de 1 até o número final lido. */
#include <iostream>
using namespace std;

int main() {
    int num_final;
    int num;

    cout << "Digite o numero inicial: ";
    cin >> num;

    cout << "Digite o numero final: ";
    cin >> num_final;

    cout << "Os multiplos de " << num << " ate " << num_final << " sao:" << endl;

    for (int i = 1; i <= num_final; i++) {
        if (i % num == 0) {
            cout << i << endl;
        }
    }

    return 0;
}