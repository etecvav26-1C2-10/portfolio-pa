// Online C++ compiler to run C++ program online
// ler 15 número em um vetor, contar e exibir quantidade de pares e ímpares


#include <iostream>
using namespace std;

int main() {
    int vet[15];
    int qtdPares = 0, qtdImpares = 0;

    for (int i = 0; i < 15; i++) {
        cout << "Digite o " << i + 1 << "o numero: ";
        cin >> vet[i];

        if (vet[i] % 2 == 0) {
            qtdPares++;
        } else {
            qtdImpares++;
        }
    }

    cout << "\nQuantidade de pares: " << qtdPares;
    cout << "\nQuantidade de impares: " << qtdImpares << endl;

    return 0;
}
