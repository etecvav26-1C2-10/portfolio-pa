/* 
 * INstituição: EtecVav - VAsco Antonio Vecharutti
Autoria: Kevin Fernandes, Vitor Paulielo
Turma: 1ºC2 
data: 12 de Março, 2026

Descrição: Ler a quantidade de litros a serem inseridos e o preço da gasolina. Calcular o valor a ser pago e devolver todos os dados.
*/  

programa
{
	
	funcao inicio()
	{
	real qtd_litro , cot_l, debito 
	
	escreva ("A quantidade e litros de combustivel a abastecer: ")
		leia(qtd_litro)
	escreva ("\n O preço da Gasolina: ")
		leia (cot_l)

	 	debito = qtd_litro * cot_l 
	 escreva ("\n A quantidade de litros inserida foi: "+ qtd_litro +"\n O valor atual da gasolina é: "+ cot_l +"\n E o débito foi de: "+ debito)
	}
}

/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 272; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */