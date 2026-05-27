// Exercicio-09- cpp
// Kevin Silva Fernandes - 1ºc2
/* Enunciado: Ler um número entre 50 e 100. Exibir a sequência de Fibonacci até esse número. */
#include <iostream>
using namespace std;

int main() {
    int numero_base;
    int a = 0;
    int b = 1;
    int proximo;

    cout << "Digite um numero entre 50 e 100: ";
    cin >> numero_base;
    if (numero_base >= 50 && numero_base <= 100) {

    while (a <= numero_base) {
        cout << a << " ";

        proximo = a + b;
        a = b;
        b = proximo;
    }
    } else {
        cout << "Este numero não esta entre entre 50 e 100";
    }

    return 0;
}