//10) Ler um nome completo.
//Exibir:Quantidade de vogais, Quantidade de consoantes
#include <iostream>
#include <string>
#include <cctype>

using namespace std;

// Função para contar vogais
int contarVogais(string nome) {
    int vogais = 0;

    for(char letra : nome) {
        letra = tolower(letra);

        if(letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u') {
            vogais++;
        }
    }

    return vogais;
}

// Função para contar consoantes
int contarConsoantes(string nome) {
    int consoantes = 0;

    for(char letra : nome) {
        letra = tolower(letra);

        if(isalpha(letra) &&
          !(letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u')) {

            consoantes++;
        }
    }

    return consoantes;
}

int main() {

    string nome;

    cout << "Digite seu nome completo: ";
    getline(cin, nome);

    cout << "Quantidade de vogais: " << contarVogais(nome) << endl;
    cout << "Quantidade de consoantes: " << contarConsoantes(nome) << endl;

    return 0;
}