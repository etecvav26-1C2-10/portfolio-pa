// Online C++ compiler to run C++ program online
/*ler 20 números em um vetor, Criar outro vetor com os sinais invertidos.
Exibir a soma dos valores positivos dos dois vetores.*/

#include <iostream>
using namespace std;

int main() {
    int vet1[10];
    int vet2[10];
    int soma = 0;

    for (int i = 0; i < 10; i++) {
        cout << "Digite o " << i + 1 << "o numero: ";
        cin >> vet1[i];
        
        vet2[i] = vet1[i] * (-1); 
    }

  
    for (int i = 0; i < 10; i++) {
        if (vet1[i] > 0) {
            soma = soma + vet1[i];
        }
        if (vet2[i] > 0) {
            soma = soma + vet2[i];
        }
    }

    cout << "\nA soma dos valores positivos de ambos os vetores é: " << soma << endl;

    return 0;
}
