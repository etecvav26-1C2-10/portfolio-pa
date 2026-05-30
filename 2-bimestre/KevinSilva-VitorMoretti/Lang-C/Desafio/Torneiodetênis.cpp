#include <iostream>

int main() {
    int vitoria =0;
    char resultado;
    int grupo = 0;
    for (int i = 0; i < 6; i++) {
        std::cout << "Digite se V se venceu ou  P se perdeu: ";
        std::cin >> resultado;
        
        if (resultado == 'v' || resultado == 'V') {
            vitoria++;
        }
    } 
        if (vitoria >= 5) {
            std::cout << "grupo 1";
        }
        else if (vitoria >= 3) {
            std::cout << "grupo 2";
        }
        else if (vitoria >= 1) {
            std::cout << "grupo 3";
        }
        else {
            std::cout << "grupo -1";
        }
        

    return 0;
}