/*descrição: Ler dois números inteiros e calcular:Adição, subtração, multiplicação e divisão*/
#include <iostream>
using namespace std;

int adicao(int n1, int n2) {
        return n1 + n2;
    }
    int subtracao(int n1, int n2) {
        return n1 - n2;
    }
    int multiplicacao(int n1, int n2) {
        return n1 * n2;
    }
    int divisao(int n1, int n2) {
        return n1 / n2;
    }

int main() {
    int n1;
    int n2;
    
    cout << "Escreva o primeiro número:\n";
    cin >> n1;
    
    cout << "Escreva o segundo número:\n";
    cin >> n2;
    
    cout << "Soma: " << adicao(n1, n2) << endl;
    cout << "Subtracao: " << subtracao(n1, n2) << endl;
    cout << "Multiplicacao: " << multiplicacao(n1, n2) << endl;
    cout << "Divisao: " << divisao(n1, n2) << endl;
    
    return 0;
}
