// Online C++ compiler to run C++ program online
/*ler 15 números em um vetor, exibir o índice do maior número e do menor número*/


#include <iostream>
using namespace std;

int main() {
    int vet[15];
    int indMenor = 0, indMaior = 0; 

    for (int i = 0; i < 15; i++) {
        cout << "Digite o " << i + 1 << "o numero: ";
        cin >> vet[i];
    }


    for (int i = 1; i < 15; i++) {
        if (vet[i] < vet[indMenor]) {
            indMenor = i; 
        }
        if (vet[i] > vet[indMaior]) {
            indMaior = i; 
        }
    }

    cout << "\nIndice do MENOR valor: " << indMenor << endl;
    cout << "Indice do MAIOR valor: " << indMaior << endl;

    return 0;
}
