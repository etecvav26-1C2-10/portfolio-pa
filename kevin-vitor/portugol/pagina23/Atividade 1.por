/*
 Data: 01/04/2026
 instituição: Etec Vasco Antonio Venchiarutti
 Feito por: Vitor Moretti

 Descrição: Ler um ano e verificar se o ano é bissexto. Exibir o
 ano lido, informando se é ou não é bissexto.
*/ 
programa {
  funcao inicio() {
    
    real ano 

    escreva ("Digite o ano: ")
    leia (ano)

    se ((ano % 4 == 0 e ano % 100 > 0) ou (ano % 400 == 0)){
      escreva ("O ano é bissexto")
    }
    senao {
      escreva ("O ano não é bisexto")
    }
  }
}

