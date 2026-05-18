// Ler uma palavra e verificar se é paindromo
#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string pav, inver; 
    
    std::cout << "Digite uma palavra: ";
    std::cin >> pav;
    
    inver = pav; 
    
    std::reverse(inver.begin(), inver.end());{
        if (pav == inver){
            std::cout << "è um palindromo";
        }
        else {
            std::cout << "não é palindromo";
        }
    }
    
    return 0;
}
