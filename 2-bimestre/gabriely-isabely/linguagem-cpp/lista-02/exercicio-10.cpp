/* Descrição: Ler um nome completo. Exibir: quantidade de vogais e consoantes*/
#include <iostream>
#include <string>
using namespace std;

int contarVogais(string nome) {

    int vogais = 0;

    for(int i = 0; i < nome.length(); i++) {

        if(nome[i] == 'a' || nome[i] == 'e' ||
           nome[i] == 'i' || nome[i] == 'o' ||
           nome[i] == 'u' ||

           nome[i] == 'A' || nome[i] == 'E' ||
           nome[i] == 'I' || nome[i] == 'O' ||
           nome[i] == 'U') {

            vogais++;
        }
    }

    return vogais;
}

int contarConsoantes(string nome) {

    int consoantes = 0;

    for(int i = 0; i < nome.length(); i++) {

        if((nome[i] >= 'a' && nome[i] <= 'z') ||
           (nome[i] >= 'A' && nome[i] <= 'Z')) {

            if(!(nome[i] == 'a' || nome[i] == 'e' ||
                 nome[i] == 'i' || nome[i] == 'o' ||
                 nome[i] == 'u' ||

                 nome[i] == 'A' || nome[i] == 'E' ||
                 nome[i] == 'I' || nome[i] == 'O' ||
                 nome[i] == 'U')) {

                consoantes++;
            }
        }
    }

    return consoantes;
}
    
int main() {
    
    string nome;

    cout << "Escreva um nome completo:\n ";
    getline(cin, nome);

    cout << "Quantidade de vogais: " << contarVogais(nome) << endl;

    cout << "Quantidade de consoantes: " << contarConsoantes(nome);

    return 0;
}