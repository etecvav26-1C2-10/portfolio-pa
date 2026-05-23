#include <iostream>
#include <string>

using namespace std;

int main() {

    string nomes[10];
    string aux;

    // Leitura dos nomes
    for(int i = 0; i < 10; i++) {
        cout << "Digite um nome: ";
        cin >> nomes[i];
    }

    // Ordenação decrescente
    for(int i = 0; i < 10; i++) {
        for(int j = i + 1; j < 10; j++) {

            if(nomes[i] < nomes[j]) {

                aux = nomes[i];
                nomes[i] = nomes[j];
                nomes[j] = aux;

            }

        }
    }

    // Exibição crescente
    cout << "\nNomes em ordem crescente:\n";

    for(int i = 9; i >= 0; i--) {
        cout << nomes[i] << endl;
    }

    return 0;
}