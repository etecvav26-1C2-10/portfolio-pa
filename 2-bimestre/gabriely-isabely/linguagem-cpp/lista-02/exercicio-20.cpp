// Online C++ compiler to run C++ program online
/*Ler 10 números em um vetor.
Exibir o terceiro menor valor.*/

#include <iostream>
using namespace std;

int main() {
    int vet[10];
    int aux;

    for (int i = 0; i < 10; i++) {
        cout << "Digite o " << i + 1 << "o numero: ";
        cin >> vet[i];
    }


    for (int i = 0; i < 9; i++) {
        for (int j = i + 1; j < 10; j++) {
            if (vet[i] > vet[j]) {
                aux = vet[i];
                vet[i] = vet[j];
                vet[j] = aux;
            }
        }
    }

   
    cout << "\nO terceiro menor valor digitado eh: " << vet[2] << endl;

    return 0;
}
