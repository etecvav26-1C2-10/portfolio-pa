// Ler números e se for lido 0 deletar o anterior
#include <iostream>

int main(){
	int N, x[N], soma;
	
	std::cout << "Digite as entradas: ";
	std::cin >> N;
	
	for(int i=0; i < N; i++){
		std::cout << "";
		std::cin >> x[N];
		
		if(x[N] > 0){
		soma += x[N];
		}
		else if(x[N] = 0){
		soma -= soma;
	}
	}
		
	std::cout << "\n" << soma << std::endl;
	
}
