#include <iostream>

int main() {
    int numeros[10];
    int troca;

    // Pedindo os números
    for (int i = 0; i < 10; i++) {
        std::cout << "Digite o " << i + 1 << " numero: ";
        std::cin >> numeros[i];
    }

    // Colocando em ordem crescente
    for (int i = 0; i < 10; i++) {
        for (int j = i + 1; j < 10; j++) {

            if (numeros[i] > numeros[j]) {

                troca = numeros[i];
                numeros[i] = numeros[j];
                numeros[j] = troca;

            }
        }
    }

    // Mostrando o terceiro menor valor
    std::cout << "\nO terceiro menor valor eh: " << numeros[2];

    return 0;
}
