/* Descrição: Ler uma palavra. Substituir todas as vogais por *.*/
#include <iostream>
#include <string>
using namespace std;

string substituicaoVogais(string palavra) {
    
    for(int i = 0; i < palavra.length(); i++) {
        
         if(palavra[i] == 'a' || palavra[i] == 'e' ||
           palavra[i] == 'i' || palavra[i] == 'o' ||
           palavra[i] == 'u') {
               
            palavra[i] = '*';
         }
    }
    
    return palavra;
}
    
int main() {
    
    string palavra;
    
    cout << "Escreva uma palavra:\n";
    cin >> palavra;
    
    palavra = substituicaoVogais(palavra);
    
    cout << palavra;

    return 0;
}