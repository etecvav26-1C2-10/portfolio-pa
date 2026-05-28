/*
Exercicio 08 - cpp
Vitor Moretti - 1ºc2
Ler um número e calcular a soma dos números pares e ímpares de 0 até esse número.
*/
#include <iostream>
using namespace std; 

int main() {
    int limite, pares=0, impares=0;
    
    cout << "Digite um numero: ";
    cin >> limite;
    
    for (int i = 0; i <= limite; i++) {
        if (i % 2 == 0) {
           
            pares += i;
        } else {
           
            impares += i;
        }
    }
        cout << "A soma dos pares é: " << pares << endl;
        cout << "A soma dos impares é: " << impares << endl;
    
    return 0;
}