/*Exercício 16
Autor: Kevin Silva Fernandes
Turma: 1ºC2
ETEC Vasco Antônio Venchiarutti
enunciado:16) Ler 15 números em um vetor.
Exibir o índice:

Do menor valor
Do maior valor*/
#include <iostream>

int main() {
 int num[15], num_maior, num_menor, ind_maior, ind_menor;
 
 for (int i = 0; i < 15; i++) {
     std::cout << "Digite um número: ";
     std::cin >> num[i];
     
 num_menor < num [0];
 num_maior > num[0];
 ind_maior = 0;
 ind_menor = 0;
 
 for (int i = 1; i < 15; i++) {

        if (num[i] > num_maior) {
            num_maior = num[i];
            ind_maior = i;
        }

        if (num[i] < num_menor) {
            num_menor = num[i];
            ind_menor = i;
        }
    }
}
 std::cout << "Indice do maior valor: " << ind_maior << std::endl;
 std::cout << "Indice do menor valor: " << ind_menor << std::endl;

    return 0;
}