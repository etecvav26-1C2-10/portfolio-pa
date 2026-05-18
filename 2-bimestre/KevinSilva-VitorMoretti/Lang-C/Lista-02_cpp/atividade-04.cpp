#include <iostream>
#include <cmath>

int main() {
  int adicao, subtracao, multiplicacao, divisao, n1, n2;
  std::cout << "Digite um numero: ";
  std::cin >> n1;
  std::cout << "Digite seu segundo numero: ";
  std::cin >> n2;
  adicao = n1 + n2;
  subtracao = n1 - n2;
  multiplicacao = n1 * n2;
  divisao = n1 / n2;

std::cout << "A adição desses números é: " << adicao << ", a subtração desses numeros é: " << subtracao <<",a multiplicação desses números é: " << multiplicacao << " e a divisão desses números é: " << divisao << std::endl;

    return 0;
}