//Ler 5 numeros e verificar a ordem
#include <iostream>

std::string verificarOrdem(int n1, int n2, int n3, int n4, int n5) {    //Criação de função para verificar a ordem

    if (n1 < n2 && n2 < n3 && n3 < n4 && n4 < n5) {
        return "Ordem crescente";
    }
    else if (n1 > n2 && n2 > n3 && n3 > n4 && n4 > n5) {
        return "Ordem decrescente";
    }
    else {
        return "Nao ha ordem";
    }
}   //Fim da verificação

int main() {

    int n1, n2, n3, n4, n5;

    std::cout << "Digite 5 numeros:\n";
    std::cin >> n1 >> n2 >> n3 >> n4 >> n5;

    std::cout << verificarOrdem(n1, n2, n3, n4, n5);    // Retorno da ordem

    return 0;
}             
