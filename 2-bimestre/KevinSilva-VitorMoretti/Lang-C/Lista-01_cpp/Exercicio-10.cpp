/*
Exercicio 10 - cpp
Vitor Moretti - 1ºc2
Jogo de adivinhação: o programa sorteia um número entre 1 e 100, e o usuário tenta adivinhar.
*/
#include <iostream>
#include <random> 

int main() {
    
    std::random_device rd;
    std::mt19937 gerador(rd());
    std::uniform_int_distribution<> distribuicao(1, 100);
    int numeroAleatorio = distribuicao(gerador);

    /* Código que exibe o numero sorteado (se usar é trapaça)
    std::cout << "O numero sorteado foi: " << numeroAleatorio << std::endl;
    */
    
    int chute;
        
        while (chute != numeroAleatorio){
            
            std::cout << "Chute um numero: ";
            std::cin >> chute;
            
            if (chute > numeroAleatorio){
                std::cout << "Chute muito alto. \n";
            }
            else if (chute == numeroAleatorio){
                std::cout << "Acertou";
            }
            else {
                std::cout << "Chute muito baixo \n";
            }
}
    return 0;
}