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
		else{
		soma -= x[N];
		}
	}
		
	std::cout << "\n" << soma << std::endl;
	
}
