
// Exercicio-03 - cpp
// Kevin Silva - 1ºc2
// Ler números até que o usuário digite um número negativo e mostrar a soma dos números digitados   

#include <iostream>
using namespace std;

int main() {
    float numero, soma = 0;

    cout << "Digite um numero: ";
    cin >> numero;

    while (numero >= 0) {
        soma = soma + numero;

        cout << "Digite um numero: ";
        cin >> numero;
    }

    cout << "A soma dos numeros e: " << soma << endl;

    return 0;
}
