/*Isabely 1ºc2
descrição: Ler vários números até que a soma desses números seja maior que 100. Exibir a multiplicação dos números lidos.*/
#include <iostream>
using namespace std;


int main() {
    int numero;
    int soma = 0;
    int produto = 1;
while ( soma  <= 100 ) {
    
    cout << "Escreva um número: ";
  cin >> numero;
   soma += numero; 
   produto *= numero;
}
  cout << "Soma total: " << soma << endl;
  cout << "Multiplicacao de todos os números: " << produto << endl;
    return 0;
}