// Exercicio-07- cpp
// Kevin Silva Fernandes - 1ºc2
/* Enunciado: Ler a quantidade de pessoas e ler a altura dessas pessoas.
Calcular e exibir a altura média de todas as pessoas. */
#include <iostream>
using namespace std;

int main() {
    int pessoas;
    float altura;
    float media;
    float soma = 0;
    cout << "Digite a quantidade de pessoas: ";
    cin >> pessoas;
    
    for (int i = 1; i <= pessoas; i++) {
    cout << "Digite a altura da pessoa " << i << ": ";
    cin >> altura;
    soma = soma + altura;
    }
    
    media = soma / pessoas;
    cout << "A media da altura as pessoas é " << media << endl;
    
    return 0;
}