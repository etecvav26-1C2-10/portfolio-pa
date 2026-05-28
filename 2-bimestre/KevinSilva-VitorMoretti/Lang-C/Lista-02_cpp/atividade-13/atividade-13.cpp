// Ler 20 letras e contar quantas vezes determinada letra aparece
#include <iostream>

int main() {
    char letras[20];
    char busca;
    int contador = 0;

    std::cout << "Digite 20 letras: ";
    for (int i = 0; i < 20; i++) {  // leitura de 20 letras
        std::cin >> letras[i];
    }
    
    std::cout << "Digite a letra para contar: ";    // Leitura de letra que quer buscar
    std::cin >> busca;

    
    for (int i = 0; i < 20; i++) {  // Contando aparições
        if (letras[i] == busca) {
            contador++;
        }
    }

    std::cout << "A letra '" << busca << "' aparece " << contador << " vezes.\n" << std::endl;

    return 0;
}
