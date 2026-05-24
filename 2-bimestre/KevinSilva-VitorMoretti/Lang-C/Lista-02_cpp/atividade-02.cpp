/*Exercício 2
Autor: Kevin Silva Fernandes
Turma: 1ºC2
ETEC Vasco Antônio Venchiarutti
enunciado:
2) Ler a base e o expoente.
Calcular a potência usando repetição.
➡️ Criar uma função para o cálculo.*/
#include <iostream>

long long potencia(int base, int expoente) {
    long long resultado = 1;

    for (int i = 0; i < expoente; i++) {
        resultado *= base;
    }

    return resultado;
}

int main() {
    5
    
    int base, expoente;

    std::cout << "Digite a base: ";
    std::cin >> base;

    std::cout << "Digite o expoente: ";
    std::cin >> expoente;

    std::cout << "Resultado: " 
              << potencia(base, expoente) 
              << std::endl;

    return 0;
}