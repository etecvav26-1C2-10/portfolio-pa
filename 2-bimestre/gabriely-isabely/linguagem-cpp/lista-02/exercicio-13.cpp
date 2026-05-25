// Online C++ compiler to run C++ program online
//ler 20 letras em um vetor, ler uma letra e quantas vezes ela aprece


#include <iostream>
using namespace std;

int main() {
    char letras[20];
    char letraProcurada;
    int contador = 0;

    for (int i = 0; i < 20; i++) {
        cout << "Digite a " << i + 1 << "a letra: ";
        cin >> letras[i];
    }

    cout << "\nDigite a letra que deseja buscar: ";
    cin >> letraProcurada;

    for (int i = 0; i < 20; i++) {
        if (letras[i] == letraProcurada) {
            contador++;
        }
        
    }

    cout << "A letra '" << letraProcurada << "' aparece " << contador << " vezes." << endl;

    return 0;
}
