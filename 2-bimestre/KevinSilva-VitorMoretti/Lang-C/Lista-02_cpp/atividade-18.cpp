/*Exercício 16
Autor: Kevin Silva Fernandes
Turma: 1ºC2
ETEC Vasco Antônio Venchiarutti
enunciado:18) Ler 20 letras em um vetor.
Contar as vogais (a, e, i, o, u)
Armazenar em um vetor de 5 posições e exibir.
*/
#include <iostream>

int main() {
    char letras[20];
    char vogais[5] = {'a', 'e', 'i', 'o', 'u'};
    int contador[5] = {0};

    bool encontrou = false;

    // Leitura das letras
    for (int i = 0; i < 20; i++) {
        std::cout << "Digite uma letra: ";
        std::cin >> letras[i];

        encontrou = false;

        // Verifica se é vogal
        for (int j = 0; j < 5; j++) {

            if (letras[i] == vogais[j] ||
                letras[i] == vogais[j] - 32) {

                contador[j]++;
                encontrou = true;
            }
        }
    }

    // Exibe resultado
    std::cout << "\nQuantidade de vogais:\n";

    for (int i = 0; i < 5; i++) {
        std::cout << vogais[i] << ": "
                  << contador[i] << std::endl;
    }

    return 0;
}
