/* Nome: Vitor Moretti 
 *  turma:1ºC2
 *  Etec Vasco Antônio Venchiarutti

 *  Descriçaõ: Se o preço do etanol for 70% do preço da gasolina, recomendar o etanol, caso contrário, recomendar gasolina
 */


programa
{
	funcao inicio()
	{
	real etanol, gasolina, valor 

	escreva ("Digite o preço da gasolina: ")
	leia (gasolina)

	escreva ("Digite o preço do etanol: ")
	leia (etanol)

	valor = gasolina / 100 * 70

	se (etanol <= valor){
		escreva (valor)
		escreva ("O valor do etanol é mais barato, então, use etanol")
	}
	senao {
		escreva ("A gasolina é mais barata, use gasolina")
	}
}
}
