#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    float numero;
    float soma = 0;
    
    cout << "Escreva um número:\n";
    cin >> numero;
    
    while (numero >= 0) {
        soma += numero;
        
        cout << "Escreva outro número: ";
        cin >> numero;
    }
    
    cout << "Soma: " << soma << endl;

    return 0;
}
