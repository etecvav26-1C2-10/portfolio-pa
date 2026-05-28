// Ler 10 números em um vetor.
// Criar outro vetor com os sinais invertidos.
// Exibir a soma dos valores positivos dos dois vetores.

#include <iostream>

int main() {
    
    int num_p[10], i, num_s[10], soma; //num_p = Primeiro vetor num_s = 2º
    
    for (i=0; i < 10; i++){ //Pede 10 numeros
        std::cout << "Digite um numero: ";
        std::cin >> num_p[i];
    }
    
    for (i=0; i < 10; i++){ //Inverte
        if(num_p[i] > 0){
            num_s[i] = num_p[i] * -1; //para negativo
        }
    }
    
    for(i=0; i < 10; i++){
        if(num_p[i] < 0){
            num_s[i] = num_p[i] * -1; //para positivo
        }
        std::cout << "\n" << num_s[i]; // Exibe Arr 2
    }
    
    //Soma dos positivos
    for(i = 0; i < 10; i++) {

        if(num_p[i] > 0) {
            soma += num_p[i];
        }

        if(num_s[i] > 0) {
            soma += num_s[i];
        }
    }
    std::cout << "\n\nSoma dos positivos: " << soma;
    
    return 0;
}
