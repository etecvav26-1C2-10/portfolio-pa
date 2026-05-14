/*descrição: Ler um número inteiro.Exibir a soma dos números ímpares até o número lido.*/
#include <iostream>
using namespace std;
 
 bool impar(int numero)
 {
     if(numero % 2 != 0)
     {
         return true;
     }
     else 
     {
         return false;
     }
 }

int main() {
    int numero;
    int soma = 0;
    
    cout << "Escreva um núemro:\n";
    cin >> numero;
    
     for(int i = 1; i <= numero; i++)
    {
        if(impar(i))
        {
            soma += i;
        }
    }

    cout << "A soma dos impares é " << soma;

    return 0;
}