// Online C++ compiler to run C++ program online
/*Ler 20 letras em um vetor.
Contar as vogais (a, e, i, o, u)
Armazenar em um vetor de 5 posições e exibir.*/

#include <iostream>
using namespace std;

int main() {
    char letras[20];
    int vogais[5] = {0, 0, 0, 0, 0}; 

    for (int i = 0; i < 20; i++) {
        cout << "Digite a " << i + 1 << "a letra: ";
        cin >> letras[i];


        if (letras[i] == 'a' || letras[i] == 'A') vogais[0]++;
        else if (letras[i] == 'e' || letras[i] == 'E') vogais[1]++;
        else if (letras[i] == 'i' || letras[i] == 'I') vogais[2]++;
        else if (letras[i] == 'o' || letras[i] == 'O') vogais[3]++;
        else if (letras[i] == 'u' || letras[i] == 'U') vogais[4]++;
    }

    cout << "\nQuantidade de vogais armazenadas:\n";
    cout << "A: " << vogais[0] << "\n";
    cout << "E: " << vogais[1] << "\n";
    cout << "I: " << vogais[2] << "\n";
    cout << "O: " << vogais[3] << "\n";
    cout << "U: " << vogais[4] << "\n";

    return 0;
}
