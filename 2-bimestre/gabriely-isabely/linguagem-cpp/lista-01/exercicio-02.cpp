#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    int numero;
    int resultado = 1;
    
    cout << "Escreva um número:\n";
    cin >> numero;
    
    for (int i = 0; i <= numero; i++) {
        resultado = resultado * 2;
        cout << "2^" << i << "=" << resultado << endl;
    }

    return 0;
}
