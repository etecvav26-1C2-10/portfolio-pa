/* 
Autoria: Kevin Fernandes, Vitor Paulielo
instituição: etec Vasco Antonio Venchiarutti 
Turma: 1ºC2 
data: 19 de Março, 2026


Descrição: O caixa do supermercado recebe uma certa quantidade de moedas por valores 1, 5, 10,25 ,50 centavos, e ainda moedas de 1 real. 
Cacular e exibir o valor recebido de cada um dos tipos de moeda e soma total em moedas.
*/ 
programa
{
	
	funcao inicio()
	{
     real moedas_recebidas, um_ct, cinco_ct, dez_ct, vintecinco_ct, cinquenta_ct, um_real, total
     escreva("quantas moedas de um_ct vc recebeu? ")
     leia(um_ct)
     escreva("quantas moedas de cinco_ct vc recebeu? ")
     leia(cinco_ct)
     escreva("quantas moedas de dez_ct vc recebeu? ")
     leia(dez_ct)
     escreva("quantas moedas de vintecinco_ct vc recebeu? ")
     leia(vintecinco_ct)
     escreva("quantas moedas de cinquenta_ct vc recebeu? ")
     leia(cinquenta_ct)
     escreva("quantas moedas de um_real vc recebeu? ")
     leia(um_real)
     total = (um_ct * 0.01) +
     (cinco_ct * 0.05) +
     (dez_ct * 0.10) +
     (vintecinco_ct * 0.25) +
     (cinquenta_ct * 0.50) +
     (um_real * 1.0)
     
     escreva("\n1 centavo: R$ " + (um_ct * 0.01))
     escreva("\n5 centavos: R$ " + (cinco_ct * 0.05))
     escreva("\n10 centavos: R$ " + (dez_ct * 0.10))
     escreva("\n25 centavos: R$ " + (vintecinco_ct * 0.25))
     escreva("\n50 centavos: R$ " + (cinquenta_ct * 0.50))
     escreva("\n1 real: R$ " + (um_real * 1.0))

     escreva("\nTotal: R$ " + total)
     
	}
}

/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 1489; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */