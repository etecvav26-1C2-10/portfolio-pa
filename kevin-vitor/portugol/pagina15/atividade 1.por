/* 
Autoria: Kevin Fernandes, Vitor Paulielo
instituição: Etec Vasco Antonio Venchiarutti 
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
inteiro qtd_cavalos
inteiro qtd_ferraduras
	escreva("digite a quantidade de cavalos adquiridos recentemente: ")
	leia(qtd_cavalos)
     qtd_ferraduras=(qtd_cavalos)*4
     escreva ("A quantidade de cavalos adquiridos foi de:", qtd_cavalos)
     escreva("\nserão necessários: "+qtd_ferraduras+" ferraduras")
	}
}
