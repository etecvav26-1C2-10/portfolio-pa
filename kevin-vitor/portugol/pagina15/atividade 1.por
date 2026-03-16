/* 
Autoria: Kevin Fernandes, Vitor Paulielo
Turma: 1ºC2 
data: 05 de Março, 2026

Descrição: O Haras Cavalos Brilhantes compra cavalos com frequência. Ler a
quantidade de cavalos adquiridos recentemente, calcular a quantidade de
ferraduras necessárias para os novos cavalos e exibir a quantidade de
novos cavalos e sua respectiva quantidade de ferraduras.

*/ 
 


programa
{
	
	funcao inicio()
	{
inteiro quantidade_cavalos
inteiro quantidade_ferraduras
	escreva("digite a quantidade de cavalos adquiridos recentemente: ")
	leia(quantidade_cavalos)
     quantidade_ferraduras=(quantidade_cavalos)*4
     escreva ("A quantidade de cavalos adquiridos foi de:", quantidade_cavalos)
     escreva("\nserão necessários: "+quantidade_ferraduras+" ferraduras")
	}
}



/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 374; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */