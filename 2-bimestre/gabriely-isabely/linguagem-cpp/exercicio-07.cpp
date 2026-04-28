#include <iostream>
using namespace std;


int main() {
    int soma = 0;
    float altura;
    float media;
    int pessoas;
        
    cout << "Escreva a quantidade de pessoas: ";
    cin >> pessoas;
     for (int i = 1; i <= pessoas; i++) {
         cout << "Digite a altura das pessoas" << i << ": " ;
         
        cin >> altura;
        soma = soma + altura;
     }
    
    media = soma / pessoas;
    
    cout << "A média de altura das pessoas é: " << media << endl;
    
    return 0;
}
