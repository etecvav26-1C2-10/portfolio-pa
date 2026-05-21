/* Descrição: Ler o raio de 5 círculos.Calcular e exibir a soma das áreas*/
#include <iostream>
#include <cmath>

using namespace std;

float calcularArea(float raio)
{
    return 3.14 * pow(raio, 2);
}

int main()
{
    float raio;
    float soma = 0;

    cout << "Digite o valor dos raios:\n";

    for(int i = 1; i <= 5; i++)
    {
        cin >> raio;

        soma = soma + calcularArea(raio);
    }

    cout << "A soma da area é de: " << soma << endl;

    return 0;
}
