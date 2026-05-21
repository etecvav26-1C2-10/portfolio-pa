/*12) Ler 15 números em um vetor.
Contar e exibir:

    Quantidade de pares
    Quantidade de ímpares
*/
#include <iostream>

int main() {
    
    int numeros[15];
    int pares = 0;
    int impares = 0;
    
   std::cout << "Digite 15 números separados por espaço: ";
for (int i = 0; i < 15; i++) {
    std::cin >> numeros[i];

        if (numeros[i] % 2 == 0) {
            pares++;
        } else {
            impares++;
        }
      
 
}
std:: cout << "\nQuantidade de pares: " << pares << std::endl;
std:: cout << "Quantidade de impares: " << impares << std::endl;
   return 0;
}
