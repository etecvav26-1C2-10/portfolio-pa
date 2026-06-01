// Ler números e se for lido 0 deletar o anterior
#include <iostream>

int main(){
	
	//Entrada
	int N, x, soma=0, anterior = 0;
	
	std::cout << "Digite a quantidade entradas: ";
	std::cin >> N;
	
	std::cout << "\nDigite os numeros:\n";
	
	//operação
	for(int i=0; i < N; i++){
		std::cout << "";
		std::cin >> x;
		
		if(x > 0){
			soma += x;
			anterior = x;
		}
		else if(x = 0){
			soma -= anterior;
			anterior = 0;
		}
	}	
	
	//saída
	std::cout << "\n" << soma << std::endl;
	
	return 0;
}
