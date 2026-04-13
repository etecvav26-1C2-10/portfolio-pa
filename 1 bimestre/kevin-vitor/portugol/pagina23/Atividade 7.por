/*Nome: Vitor Moretti
  turma: 1ºC2
  Etec Vasco Antônio Venchiarutti
  Descriçaõ: Verifiacar e exibir se uma letra é ou não uma vogal. 
*/

programa {
  funcao inicio() {
    
    caracter letra

    escreva ("Digite uma letra: ")
    leia (letra)

    se (letra == 'a' ou letra == 'e' ou letra == 'i' ou letra == 'o' ou letra == 'u'){
      escreva ("A letra digitada é uma vogal")
    }
    senao {
      escreva ("A letra digitada é uma consoante")
    }
  }
}
