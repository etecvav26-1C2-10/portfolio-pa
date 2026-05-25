// Online C++ compiler to run C++ program online
//ler 10 nomes em um vetor, ordenar em ordem decrescente e exibir em ordem crescente

#include <iostream>
#include <string> 
using namespace std;

int main() {
    string nomes[10];
    string aux;

    for (int i = 0; i < 10; i++) {
        cout << "Digite o " << i + 1 << "o nome: ";
        cin >> nomes[i];
    }

    for (int i = 0; i < 9; i++) {
        for (int j = i + 1; j < 10; j++) {
            if (nomes[i] < nomes[j]) { 
                aux = nomes[i];
                nomes[i] = nomes[j];
                nomes[j] = aux;
            }
        }
    }

    cout << "\nNomes em ordem crescente:\n";
    for (int i = 9; i >= 0; i--) {
        cout << nomes[i] << endl;
    }

    return 0;
}
