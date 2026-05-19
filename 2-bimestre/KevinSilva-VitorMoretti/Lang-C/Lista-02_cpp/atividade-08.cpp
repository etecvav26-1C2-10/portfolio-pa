//8) Ler o raio de 5 círculos.
// Calcular e exibir a soma das áreas.
#include <iostream>
# include <cmath>
int main() {
   
    double c1, c2, c3, c4, c5;
    double a1, a2, a3, a4, a5;
    std::cout << "DIgite o Raio de 5 circulos :";
    std::cin >> c1 >> c2 >> c3 >> c4 >> c5;
    a1 = pow (c1, 2) * 3.14;
    a2 = pow (c2, 2) * 3.14;
    a3 = pow (c3, 2) * 3.14;
    a4 = pow (c4, 2) * 3.14;
    a5 = pow (c5, 2) * 3.14;
    std::cout << "A area do primeiro circulo é: " << a1 << std::endl;
    std::cout << "A area do segundo circulo é: " << a2 << std::endl;
    std::cout << "A area do terceiro circulo é: " << a3 << std::endl;
    std::cout << "A area do quarto circulo é: " << a4 << std::endl;
    std::cout << "A area do quinto circulo é: " << a5 << std::endl;

    return 0;
}