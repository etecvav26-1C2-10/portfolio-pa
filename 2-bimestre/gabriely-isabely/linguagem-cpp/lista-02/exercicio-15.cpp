// Online C++ compiler to run C++ program online
// ler 20 números em um vetor, exibir o índice do primeiro número negativo


#include <iostream>
using namespace std;

int main() {
    int vet[20];
    int indiceNegativo = -1; 

    for (int i = 0; i < 20; i++) {
        cout << "Digite o " << i + 1 << "o numero: ";
        cin >> vet[i];
    }

    for (int i = 0; i < 20; i++) {
        if (vet[i] < 0) {
            indiceNegativo = i; 
            break;               
        }
    }

    if (indiceNegativo != -1) {
        cout << "\nO primeiro numero negativo esta na posicao (indice): " << indiceNegativo << endl;
    } else {
        cout << "\nNao foram digitados numeros negativos." << endl;
    }

    return 0;
}
