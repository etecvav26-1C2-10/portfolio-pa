/*
 Data: 01/04/2026
 instituição: Etec Vasco Antonio Venchiarutti
 Feito por: Vitor Moretti

 Descrição: Ler o valor de uma compra e calcular o desconto, de acordo com o valor
 total da compra.  Exibir o valor após aplicado o desconto.
 */

programa {
  funcao inicio() {
    real valor, desconto

    escreva ("Digite o valor da compra: ")
    leia (valor)

    /* sem desconto */
    se (valor < 100){
      escreva ("O total da compra será: "+ valor)
    }

     /* desconto de 10% */
    senao se (valor > 100 e valor < 500){
      desconto = (valor / 100) * 10
      valor = valor - desconto 
    escreva ("Houve desconto de 10%, então o valor a ser pago será: " + valor)
    }

     /* desconto de 20% */
      senao se (valor > 500){
        desconto = (valor / 100) * 20
        valor = valor - desconto 
      escreva ("Houve desconto de 20%, então o valor a ser pago será: " + valor)
    }


  }
}
