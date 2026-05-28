
// Exercicio-03 - cpp
// Kevin Silva - 1ºc2
// Ler números até que o usuário digite um número negativo e mostrar a soma dos números digitados   

#include <iostream>
using namespace std;

int main() {
    float numero, soma = 0; /*Cria uma variavel que lê números decimais*/

    cout << "Digite um numero: "; /*Exibe uma mensagem na tela e logo em seguida lê ela*/
    cin >> numero;

    while (numero >= 0) { /*Enquanto o numero for maior ou igual a 0 (não sendo um número negativo) o programa vai fazer a soma dos números até que seja digitado um numero negativo*/
        soma = soma + numero;

        cout << "Digite um numero: ";
        cin >> numero;
    }

    cout << "A soma dos numeros e: " << soma << endl; /*Exibe a soma*/

    return 0;
}
