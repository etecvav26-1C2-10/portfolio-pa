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
		inteiro idade
		escreva("Qual é sua idade? ")
		leia(idade)

		se (idade == 2){
			escreva("Sua tarifa é gratuita")
		}
		senao se (idade >= 3 e idade <= 12){
			escreva("Vc paga uma meia tarifa")
		}
		senao {
			escreva("Sua tarifa é completa")
		}
		
	}
}

/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 345; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */