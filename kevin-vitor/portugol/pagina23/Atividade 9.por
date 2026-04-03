/* Nome: Vitor Moretti 
   Data: 03/04/2026
   turma:1ºC2
   Etec Vasco Antônio Venchiarutti

   Descriçaõ: Verificar se o numero é uma raiz quadrada perfeita (quando colocada em uma raiz, resulta num numero inteiro positivo)
 */

programa {

  inclua biblioteca Matematica --> mat

  funcao inicio() {
    
    inteiro numero
    real raiz

    escreva ("Digite um numero: ")
    leia (numero)

    raiz = mat.raiz (numero, 2.0)

    se (raiz == mat.arredondar(raiz, 0)){
      escreva ("O numero é uma raiz perfeita")
    }
    senao {
      escreva ("O numero NÃO é uma raiz perfeita")
    }
  }
}
