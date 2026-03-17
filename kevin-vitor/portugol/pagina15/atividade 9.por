   /* 
Autoria: Kevin Fernandes, Vitor Paulielo
instituição: etec Vasco Antonio Venchiarutti 
Turma: 1ºC2 
data: 16 de Março, 2026


Descrição: Ler o peso do boi e o percentual de engorda. Carcular e exibir o novo peso do boi.

*/ 


programa
{
	
	funcao inicio()
	{
		real peso_boi, pct_engorda, peso_final, dias_gordao
		escreva("QUal é o peso do seu boi? ")
		leia(peso_boi)
		escreva("Qual o porcentual de engorda do boi? ")
		leia(pct_engorda)
		escreva("Quantos dias seu boi foi alimentado?  ")
		leia(dias_gordao)

		peso_final = peso_boi + (peso_boi * (pct_engorda/100) * dias_gordao)

	

		escreva("\n O peso do seu boi é " + peso_final)
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 226; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */