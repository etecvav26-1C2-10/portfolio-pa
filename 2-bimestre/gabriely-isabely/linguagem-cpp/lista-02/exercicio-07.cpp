/* Descrição: Ler 5 numeros. Verificar se estão:em ordem crescente, decrescente ou nao ordenado*/

#include <iostream>
using namespace std;

std::string verificarOrdem
{
    if(n1 < n2 && n2 < n3 && n3 < n4 && n4 < n5)
    {
        return "Ordem crescente";
    }
    
    else if(n1 > n2 && n2 > n3 && n3 > n4 && n4 > n5)
    {
        return "Ordem decrescente";
    }
    
    else
    {
        return "Nao esta ordenado";
    }
}

int main() {
    
    int n1, n2, n3, n4, n5;
    
    cout << "Escreva cinco numeros:\n";
    cin >> n1;
    cin >> n2;
    cin >> n3;
    cin >> n4;
    cin >> n5;
    
    cout << verificarOrdem(n1, n2, n3, n4, n5) << endl;

    return 0;
}