/* autor: Gabriely S. Alves
 * descrição */

#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    int numero;
    bool ehPrimo = true;
    
    cout << "Escreva um número:\n";
    cin >> numero;
    
    if (numero < 1) {
        ehPrimo = false;
    }else {
        for (int i = 2; i * i <= numero; i++) {
            if (numero % i == 0) {
                ehPrimo = false;
                break;
            }
        }
    }
    
    //resultado
    if (ehPrimo) {
        cout << "O número é primo";
    } else {
        cout << "O número não é primo";
    }
    return 0;
}
