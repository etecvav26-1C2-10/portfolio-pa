/*Descrição: Ler uma palavra. Verificar se é palíndromo.*/
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool ehPalindromo(string palavra) {
    string invertida = palavra;
    
    // Inverte a palavra copiada
    reverse(invertida.begin(), invertida.end());    
    
    if (palavra == invertida) {
        return true;
    } else {
        return false;
    }
}

int main() {
    string palavra;
    
    cout << "Escreva uma palavra:\n";
    cin >> palavra;
    
    if (ehPalindromo(palavra)) {
        cout << "A palavra " << palavra << " é um palindromo" << endl;
    } else {
        cout << "A palavra " << palavra << " não é um palindromo" << endl;
    }

    return 0;
}
