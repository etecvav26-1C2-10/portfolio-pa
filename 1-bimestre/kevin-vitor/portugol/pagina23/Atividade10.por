/* Nome: Kevin Silva Fernandes
 *  turma:1ºC2
 *  Etec Vasco Antônio Venchiarutti
 *  Descriçaõ:Ler a classificação indicativa de um filme e identificar sua categoria, de acordo com as seguintes faixas:

   Até 10 anos → Infantil
   De 11 a 14 anos → Infantojuvenil
   De 15 a 17 anos → Juvenil
  Acima de 17 anos → Adulto
  */
programa
{
	
	funcao inicio()
	{
		inteiro classificacao
		escreva("Qual a classificação do seu filme?")
		leia(classificacao)

		 se (classificacao <= 10){
		 	escreva ("A classificação do seu filme é infantil")
		 }
		 
		 senao se (classificacao <= 14){
		 	escreva (" A classificação do seu filme é Infanto juvenil")
		 }
		 senao se (classificacao <= 17){
		 	escreva ("A classificação do seu filme é juvenil")
		 }
		 senao{
		 	escreva ("A classificação do seu filme é adulta")
		 }
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 680; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */