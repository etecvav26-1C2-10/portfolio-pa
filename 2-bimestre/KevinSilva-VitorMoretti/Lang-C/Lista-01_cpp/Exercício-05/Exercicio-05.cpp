// Exercicio-05 - cpp
// Kevin Silva Fernandes - 1ºc2
/* Enunciado: Ler um número para a parada final e outro número que representa um múltiplo.
Exibir os múltiplos do número lido de 1 até o número final lido. */
#include <iostream>
using namespace std;

int main() {
    int num_final;
    int num;

    cout << "Digite o numero inicial: "; /*Exibe uma mensagem na tela e logo em seguida lê ela*/
    cin >> num;

    cout << "Digite o numero final: "; /*Exibe uma mensagem na tela e logo em seguida lê ela*/
    cin >> num_final;

    cout << "Os multiplos de " << num << " ate " << num_final << " sao:" << endl;

    for (int i = 1; i <= num_final; i++) { /*O programa vai exibir todos os multiplos do numero incial e até o numero final*/
        if (i % num == 0) { /*Se um numero divido pelo número incial for igual a zero o programa ira exibi-lo*/
            cout << i << endl;
        }
    }

    return 0;
}