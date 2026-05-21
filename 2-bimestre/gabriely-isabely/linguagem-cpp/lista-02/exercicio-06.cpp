/* Descrição: Ler um número. Exibir o dia da semana correspondente*/
#include <iostream>
<<<<<<< HEAD
#include <string>
using namespace std;
=======
using namespace std;
#include <string>
>>>>>>> 915d1cdffc436369e66eba8b51375589b757746c

string diaDaSemana(int numero)
{
    switch(numero)
    {
        case 1: return "Domingo";

        case 2: return "Segunda-feira";

        case 3: return "Terça-feira";

        case 4: return "Quarta-feira";

        case 5: return "Quinta-feira";

        case 6: return "Sexta-feira";

        case 7: return "Sábado";

        default: return "Número invalido";
    }
}

int main() {
    
    int numero;
    
    cout << "Escreva um número de 1 a 7:\n";
    cin >> numero;
    
    cout << "O dia da semana é: " << diaDaSemana(numero) << endl;

    return 0;
<<<<<<< HEAD
}
=======
}
>>>>>>> 915d1cdffc436369e66eba8b51375589b757746c
