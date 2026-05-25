// Online C++ compiler to run C++ program online
 //*Ler 10 números em um vetor e substituir número negativos por zero.

#include <iostream>
using namespace std;

int main() {
    int vet[10];

 
    for (int i = 0; i < 10; i++) {
        cout << "Digite o " << i + 1 << "o numero: ";
        cin >> vet[i];

      if (vet[i] < 0) {
            vet[i] = 0;
        }
    }

  
  
    cout << "\nVetor resultante:\n";
    for (int i = 0; i < 10; i++) {
        cout << vet[i] << " ";
    }
    cout << endl;

    return 0;
}
