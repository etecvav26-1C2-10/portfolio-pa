/* Nome: Kevin Silva Fernandes
 *  turma:1ºC2
 *  Etec Vasco Antônio Venchiarutti
 *  Descriçaõ: Ler o tempo de permanência de um veículo em um estacionamento e calcular o valor a pagar, considerando:

Até 2 horas → R$ 2,00 por hora

Após 2 horas →

As 2 primeiras continuam custando R$ 2,00 cada
As horas adicionais custam R$ 1,00 por hora

 */

programa
{
	
	funcao inicio()
	{
		inteiro tempo_pm, valor_pg
		escreva ("Quanto tempo seu veiculo vai ficar estacionado para ser abastecido? ")
		leia (tempo_pm)

		se (tempo_pm <= 2) {
          valor_pg = tempo_pm * 2		
		}
		senao {
          valor_pg = tempo_pm + 2
		}
		escreva ("O valor a ser pago é: "  ,valor_pg, " reais")
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 341; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */