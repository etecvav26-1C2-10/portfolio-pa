// Ler dez numeros de um vetor e substituir negativos por 0
#include <iostream>

int main() {
    
    int numeros[10];    //Array
    
    for (int i=0; i<10; i++){   //Repetição para ler números
        std::cout << "Digite um número: ";
        std::cin >> numeros[i];
        
        if(numeros[i] < 0){ //Verificação se são negativos
            numeros[i] = 0;
        }
    }
    
    std::cout << "\n" << "Substituindo:\n";
    
    for(int i=0; i < 10; i++ ){
        std::cout << numeros[i] << std::endl;   //Exibição
    }
    
    return 0;
}