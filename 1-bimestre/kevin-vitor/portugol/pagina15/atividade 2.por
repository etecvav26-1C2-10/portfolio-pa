/* 
Autoria: Kevin Fernandes, Vitor Paulielo
instituição: etec Vasco Antonio Venchiarutti 
Turma: 1ºC2 
data: 05 de Março, 2026

Descrição: Ler o nome e a idade do usuário. Calcular a idade em meses e dias. Exibir
o nome e a idade em anos, meses e dias.
*/ 
 

programa
{
	
	funcao inicio()
	{
		caracter nome_usuario
		inteiro idade_usuario 
		inteiro idade_meses 
		inteiro idade_dias
		escreva ("digite nome:")
		leia (nome_usuario)
		escreva ("digite idade:")
		leia (idade_usuario)
		idade_meses=(idade_usuario)*12
		idade_dias=(idade_usuario)*365
		escreva ("sua idade em meses é: "+idade_meses+ " e sua idade em dias é: "+ idade_dias)
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 600; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */