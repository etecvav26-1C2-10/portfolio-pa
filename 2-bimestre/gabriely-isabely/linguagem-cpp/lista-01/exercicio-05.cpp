/* autor: Gabriely S. Alves
descrição: Ler um número para a parada final e outro número que representa um múltiplo. Exibir os múltiplos do número lido de 1 até o número final lido.

*/
#include <iostream>
using namespace std;


int main() {
    int numero;
    int numero_final;
    
    cout << "Escreva um número inicial: ";
    cin >> numero;
    
    cout << "Escreva um número final: ";
    cin >> numero_final;
    
    cout << "Os multiplos de " << numero << " até " << numero_final << endl;
    for (int i = 1; i <= numero_final; i++) {
        if (i % numero == 0) {
            cout << i << endl;
        }
    }
    
    return 0;
}
