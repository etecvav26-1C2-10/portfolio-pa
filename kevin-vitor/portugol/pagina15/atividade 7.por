/* 
Autoria: Kevin Fernandes, Vitor Paulielo
instituição: etec Vasco Antonio Venchiarutti 
Turma: 1ºC2 
data: 16 de Março, 2026

Descrição: Ler base menor, ler base maior, ler altura. Calcular a area do trapézio com (b+B)+ h /2 .

*/ 

programa {
  funcao inicio() {
    real litb, bigb, altura, trapz

    escreva (" qual a base menor: ")
    leia (litb)

    escreva ("qual a base maior: ")
    leia (bigb)
    
    escreva ("qual a altura: ")
    leia (altura)

    trapz = (litb + bigb) + altura * 2

    escreva ("a area do trapézio é: " + trapz)

  }
}
