programa
{	
	
	funcao inicio()
	{
	real etanol, gasolina, valor 

	escreva ("Digite o preço da gasolina: ")
	leia (gasolina)

	escreva ("Digite o preço do etanol: ")
	leia (etanol)

	valor = gasolina / 100 * 70

	se (etanol <= valor){
		escreva (valor)
		escreva ("O valor do etanol é mais barato, então, use etanol")
	}
	senao {
		escreva ("A gasolina é mais barata, use gasolina")
	}
}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 257; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */