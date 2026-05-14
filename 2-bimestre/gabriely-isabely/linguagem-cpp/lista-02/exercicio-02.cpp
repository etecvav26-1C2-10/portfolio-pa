/*Ler a base e o expoente. Calcular a potência usando repetição.*/
#include <iostream>
using namespace std;
 
 int potencia(int base, int expoente)
 {
     int resultado = 1;
     
     for(int i = 1; i <= expoente; i++)
    {
        resultado = resultado * base;
    }

    return resultado;
 }
    
int main() {
   
    int base;
    int expoente;

    cout << "Escreva a base: ";
    cin >> base;

    cout << "Escreva o expoente: ";
    cin >> expoente;

    cout << "Resultado: " << potencia(base, expoente);

    return 0;

}