#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int numeros[10];
    int pares[10], impares[10];
    int qtdPares = 0, qtdImpares = 0;

    // Leitura dos números
    cout << "\nDigite 10 numeros:";
    for (int i = 0; i < 10; i++) {
        cin >> numeros[i];

        if (numeros[i] % 2 == 0) {
            pares[qtdPares] = numeros[i];
            qtdPares++;
        } else {
            impares[qtdImpares] = numeros[i];
            qtdImpares++;
        }
    }

    // Ordenação
    sort(pares, pares + qtdPares);
    sort(impares, impares + qtdImpares);

    // Vetor soma
    int tamanhoSoma = min(qtdPares, qtdImpares);
    int soma[tamanhoSoma];

    for (int i = 0; i < tamanhoSoma; i++) {
        soma[i] = pares[i] + impares[i];
    }

    // Exibir pares
    cout << "\nVetor de pares:\n";
    for (int i = 0; i < qtdPares; i++) {
        cout << pares[i] << " ";
    }

    // Exibir ímpares
    cout << "\n\nVetor de impares:\n";
    for (int i = 0; i < qtdImpares; i++) {
        cout << impares[i] << " ";
    }

    // Exibir soma
    cout << "\n\nVetor soma:\n";
    for (int i = 0; i < tamanhoSoma; i++) {
        cout << soma[i] << " ";
    }

    return 0;
}
