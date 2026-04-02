/* Nome: Kevin Silva Fernandes
 *  turma:1ºC2
 *  Etec Vasco Antônio Venchiarutti
 *  Descriçaõ:Ler três números inteiros e exibir o maior entre eles. 
  */
programa
{
	
	funcao inicio()
	{
		inteiro n1, n2, n3
		escreva("Digite seu prmeiro numero ")
		leia (n1)
		escreva("Digite seu segundo numero ")
		leia (n2)
		limpa()
		escreva("Digite seu terceiro numero ")
		leia (n3)
		limpa()

	     se (n1 > n2 e n1 > n3){
	     	escreva("O numero maior é:" ,n1)
	     }
	      senao se (n2> n1 e n2 > n3){
	     	escreva("O numero maior é:" ,n2)
	     }
	     senao se (n3> n1 e n3 > n2){
	     	escreva("O numero maior é: " , n3)
	     }
	     senao{
	     	escreva("Não existem numeros maiores")
	     }
				
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 150; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */