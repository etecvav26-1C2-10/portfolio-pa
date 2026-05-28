// Ler uma palavra e substituir vogais por "*"
#include <iostream>
#include <string>

int main() {
    
    std::string palavra;
    
    std::cout << "Digite uma palavra: ";    //Leitura de palavra
    std::cin >> palavra;
    
    for (int i = 0; i < palavra.length(); i++) {    // Verificação se é uma vogal
        char c = palavra[i];
        
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            palavra[i] = '*';
        }
    }
    
    std::cout << palavra << std::endl;  // Retorno com as vogais trocadas por "*"
    
    return 0;
}