/* 
Autoria: Kevin Fernandes, Vitor Paulielo
Turma: 1ºC2 
data: 05 de Março, 2026

Descrição:Ler 4 notas, calcular a média ponderada com os pesos 1, 2, 3 e 4
respectivamente e exibir as notas e o resultado da média.
*/ 


programa
{
	
	funcao inicio()
	{
		real nota_final_1, nota_final_2, nota_final_3, nota_final_4, nota_1, nota_2, nota_3, nota_4 
    
    inteiro peso_1=2
    inteiro peso_2=3
    inteiro peso_3=4
    inteiro peso_4=5
    inteiro media_ponderada 
    

    escreva ("escreva sua nota do 1º bimestre: ")
    leia (nota_1)
    

    escreva ("escreva sua nota do 2º bimestre: ")
    leia (nota_2)

    escreva ("escreva sua nota do 3º bimestre: ")
    leia (nota_3)

    escreva ("es creva sua nota do 4º bimestre: ")
    leia (nota_4)

     nota_final_1= nota_1 * peso_1  
     nota_final_2= nota_2 * peso_2
     nota_final_3= nota_3 * peso_3  
     nota_final_4= nota_4 * peso_4  
      
       media_ponderada = ( nota_final_1+ nota_final_2+ nota_final_3+ nota_final_4) / (peso_1+peso_2+peso_3+peso_4)
       escreva ("a sua media ponderada é: "+ media_ponderada )
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 467; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */