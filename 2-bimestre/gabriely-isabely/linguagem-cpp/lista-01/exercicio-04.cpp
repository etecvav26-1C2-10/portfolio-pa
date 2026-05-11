#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
   int numero;
   int maior;
   int menor;
   
   cout << "Escreva um número:\n";
   cin >> numero;
   
   maior = numero;
   menor = numero;
   
   for (int i = 1; i < 10; i++) {
       cout << "Escreva um número:\n";
       cin >> numero;
       
       if (numero > maior) {
           maior = numero;
       }
       
       if (numero < menor) {
           menor = numero;
       }
   }
   
   cout << "O menor número é: " << menor << endl;
   cout << "O maior número é: " << maior << endl;

    return 0;
}
