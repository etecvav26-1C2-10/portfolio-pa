/*
 ETEC VASCO ANTONIO VENCHIARUTTI
    Autor: Kevin Silva
    Turma: 1ºc2

    DESCRIÇÃO: Leia um número inteiro de 1 a 10 e exiba sua tabuada. Caso o número esteja fora do intervalo, solicite novamente até que o valor seja válido.
    
*/

#include <iostream>
using namespace std;

int main()
{
    int numero;
    int contador = 1;

    cout << "Digite um numero de 1 a 10: ";
    cin >> numero;

    while (numero < 1 || numero > 10)
    {
        cout << "Valor invalido. Digite novamente: ";
        cin >> numero;
    }

    while (contador <= 10)
    {
        cout << numero << " x " << contador << " = " << numero * contador << endl;
        contador++;
    }

    return 0;
}