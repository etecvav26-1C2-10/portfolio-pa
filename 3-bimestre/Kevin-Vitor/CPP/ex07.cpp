/*
 ETEC VASCO ANTONIO VENCHIARUTTI
    Autor: Kevin Silva
    Turma: 1ºc2

    DESCRIÇÃO: Leia 10 números inteiros e informe quantos são positivos, quantos são negativos e quantos são iguais a zero.
    
*/

#include <iostream>
using namespace std;

int main()
{
    int numero;
    int contador = 1;
    int positivos = 0;
    int negativos = 0;
    int zeros = 0;

    while (contador <= 10)
    {
        cout << "Digite o " << contador << "o numero: ";
        cin >> numero;

        if (numero > 0)
        {
            positivos++;
        }
        else if (numero < 0)
        {
            negativos++;
        }
        else
        {
            zeros++;
        }

        contador++;
    }

    cout << "Positivos: " << positivos << endl;
    cout << "Negativos: " << negativos << endl;
    cout << "Zeros: " << zeros << endl;

    return 0;
}