// Ler uma palavra e verificar se é paindromo
#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string pav, inver; 
    
    std::cout << "Digite uma palavra: ";    
    std::cin >> pav;
    
    inver = pav; 
    
    std::reverse(inver.begin(), inver.end());{  //Inversão da ordem
        if (pav == inver){                      //Verificação se sim
            std::cout << "è um palindromo";
        }
        else {  //Verificação se não
            std::cout << "não é palindromo";
        }   
    }   //Fim da verificação
    
    return 0;
}
