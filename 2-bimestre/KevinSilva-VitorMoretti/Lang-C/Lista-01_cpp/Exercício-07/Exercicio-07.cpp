// Exercicio-07- cpp
// Kevin Silva Fernandes - 1ºc2
/* Enunciado: Ler a quantidade de pessoas e ler a altura dessas pessoas.
Calcular e exibir a altura média de todas as pessoas. */
#include <iostream>
using namespace std;

int main() {
    int pessoas; /*variavel para números inteiros*/
    float altura; /*Variavel para números com vírgula*/
    float media; /*Variavel para números com vírgula*/
    float soma = 0; /*Variavel para números com vírgula*/
    cout << "Digite a quantidade de pessoas: ";
    cin >> pessoas;
    
    for (int i = 1; i <= pessoas; i++) { /*Enquanto i for menor ou igual ao número de pessoas, o programa vai exibir a mensagem de altura*/
    cout << "Digite a altura da pessoa " << i << ": ";
    cin >> altura;
    soma = soma + altura; /*aqui o programa vai fazer a adição de cada altura digitada pelo usuario*/
    }
    
    media = soma / pessoas;
    cout << "A media da altura as pessoas é " << media << endl;
    
    return 0;
}