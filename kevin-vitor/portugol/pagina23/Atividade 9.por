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