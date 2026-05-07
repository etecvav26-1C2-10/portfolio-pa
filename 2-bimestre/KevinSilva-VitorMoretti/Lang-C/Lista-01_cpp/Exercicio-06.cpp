/*
Exercicio 06 - cpp
Vitor Moretti - 1ºc2
Ler vários números até que a soma desses números seja maior que 100. Exibir a multiplicação dos números lidos.
*/
#include <iostream>
using namespace std;

int main() {
    int soma = 0, numero, produto = 1;

    while (soma <= 100) {
       cout << "Digite um numero: ";
       cin >> numero;

        soma += numero;
        produto *= numero;
    }
    cout << "Soma total: " << soma << endl;
    cout << "Multiplicacao dos numeros: " << produto << endl;

    return 0;
}