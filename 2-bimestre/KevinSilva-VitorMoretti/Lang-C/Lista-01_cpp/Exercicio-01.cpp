#include <iostream>
using namespace std;

int main () {

int numero;
bool ehPrimo = true;
cout << "Escreva um número inteiro " << endl;
cin >> numero;


if (numero <= 1) {
    ehPrimo= false;
}
else {
   for (int i = 2; i < numero; i++) {
            if (numero % i == 0) {
                ehPrimo = false;
                break;
    }
   }
  if (ehPrimo) {
        cout << "O número é primo." << endl;
    } else {
        cout << "O número não é primo." << endl;
    }

    return 0;
}
}