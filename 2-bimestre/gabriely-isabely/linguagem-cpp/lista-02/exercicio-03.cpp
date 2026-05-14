/*descrição: Ler o sexo e a altura. Calcular o peso ideal*/
#include <iostream>
using namespace std;

int main() {
    double altura;
    double ideal;
    char sexo;
    
    cout << "Qual o seu sexo (F/M)?\n";
    cin >> sexo;
    
    cout << "Qual a sua altura?\n";
    cin >> altura;
    
    if (sexo == 'F') {
       ideal = (altura * 62.1) - 44,7;
    }
    else if (sexo == 'M') {
        ideal = (altura * 72.7) - 58;
    }
    
    cout << "Seu peso ideal é: " << ideal << endl;

    return 0;
}