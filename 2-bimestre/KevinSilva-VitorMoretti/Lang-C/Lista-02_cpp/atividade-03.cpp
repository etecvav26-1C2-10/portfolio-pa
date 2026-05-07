// Calculo de peso ideal
#include <iostream>

int main() {

    double altura, ideal;
    char s;

    std::cout << "Qual sua altura: ";   // Leitura de altura
    std::cin >> altura;

    std::cout << "Digite seu sexo (m/f): "; //Leitura de sexo
    std::cin >> s;

    if (s == 'm') {
        ideal = (altura * 72.7) - 58; // Calculo para masculinos
    }
    else {
        ideal = (altura * 62.1) - 44.7; // calculo para feminino
    }

    std::cout << "O peso ideal é: " << ideal << std::endl; //Exibição

    return 0;
}