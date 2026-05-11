/*Isabely - 1ºc2
Ler um número. Exiba a soma de todos os números pares e ímpares de zero até o número lido. */
#include <iostream>

using namespace std;

int main() {
    int numero;
    int somapares = 0, somaimpares = 0;

    cout << "Digite um numero inteiro: ";
    cin >> numero;

    for(int i = 0; i <= numero; i++) {
        if(i % 2 == 0) {
            somapares += i;
        } else {
            somaimpares += i;
        }
    }

    cout << "Soma dos numeros pares: " << somapares << endl;
    cout << "Soma dos numeros impares: " << somaimpares << endl;

    return 0;
}