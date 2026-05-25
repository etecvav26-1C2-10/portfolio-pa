// Online C++ compiler to run C++ program online
/*Ler 10 números.
Separar:

Pares em um vetor
Ímpares em outro vetor
Ordenar os dois vetores.
Somar os elementos e armazenar em um terceiro vetor.
Exibir todos os vetores.*/

#include <iostream>
using namespace std;

int main() {
    int num;
    int pares[10], impares[10], soma[10];
    int cPar = 0, cImpar = 0; 
    int aux;

    for (int i = 0; i < 10; i++) {
        cout << "Digite o " << i + 1 << "o numero: ";
        cin >> num;
        if (num % 2 == 0) {
            pares[cPar] = num;
            cPar++;
        } else {
            impares[cImpar] = num;
            cImpar++;
        }
    }

    
    for (int i = 0; i < cPar - 1; i++) {
        for (int j = i + 1; j < cPar; j++) {
            if (pares[i] > pares[j]) {
                aux = pares[i]; pares[i] = pares[j]; pares[j] = aux;
            }
        }
    }

    for (int i = 0; i < cImpar - 1; i++) {
        for (int j = i + 1; j < cImpar; j++) {
            if (impares[i] > impares[j]) {
                aux = impares[i]; impares[i] = impares[j]; impares[j] = aux;
            }
        }
    }

   
    int menorTamanho = (cPar < cImpar) ? cPar : cImpar;

    for (int i = 0; i < menorTamanho; i++) {
        soma[i] = pares[i] + impares[i];
    }


    cout << "\n--- VETOR PARES ORDENADO ---\n";
    for (int i = 0; i < cPar; i++) cout << pares[i] << " ";
    
    cout << "\n\n--- VETOR IMPARES ORDENADO ---\n";
    for (int i = 0; i < cImpar; i++) cout << impares[i] << " ";
    
    cout << "\n\n--- VETOR SOMA ---\n";
    for (int i = 0; i < menorTamanho; i++) cout << soma[i] << " ";
    cout << endl;

    return 0;
}
