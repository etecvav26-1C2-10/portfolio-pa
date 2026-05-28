// Ler um numero inteiro e exibir a soma dos impares até o numero lido
#include <iostream>

int main() {
    
    int num, soma = 0; 
    
    std::cout << "Digite um numero: ";  // Leitura de num
    std::cin >> num;                    // '' 
    
    for (int i=1; i <= num; i++){   // Criação de váriavel comparativa "i"
        if (i % 2 != 0){            // Verificção de par ou ímpar
            soma += i;
        }
    }
    std::cout << "a soma dos pares é: " << soma << std::endl;   // Exibição
    
    return 0;
}