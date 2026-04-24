// Exercicio-02 - cpp
// Vitor Moretti - 1ºc2
// Elevar dois ao numero digitado pelo usuario

#include <iostream>

int main() {
    int num;
    
    std::cout << "Digite um numero: ";
    std::cin >> num;
    
    int resultado = 1;
    
    for (int i = 1; i <= num; i++){
        resultado = resultado * 2;
        std::cout << "2^" << i << "=" << resultado << std::endl;
    }
    return 0;
}
