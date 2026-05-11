/*Isabely - 1ºc2
Ler um número entre 50 e 100. Exibir a sequência de Fibonacci até esse número. */

#include <iostream>
using namespace std;

int main() {
    int limite;

    cout << "Digite um numero entre 50 e 100: ";
    cin >> limite;

    if (limite < 50 || limite > 100) {
        cout << "Numero invalido" << endl;
        return 0;
    }

    int a = 0, b = 1;

    cout << a << " " << b << " ";

    while (true) {
        int c = a + b;

        if (c > limite) {
            break;
        }

        cout << c << " ";

        a = b;
        b = c;
    }


    return 0;
}