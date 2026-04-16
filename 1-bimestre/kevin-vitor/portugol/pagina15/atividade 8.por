
    /* 
Autoria: Kevin Fernandes, Vitor Paulielo
instituição: etec Vasco Antonio Venchiarutti 
Turma: 1ºC2 
data: 16 de Março, 2026


Descrição: Ler o salario fixo de um funcionário e a comissão sobre itens vendidos. Somar coms e sal e devolver total.

*/ 
 
    programa {
  funcao inicio() {
    
   real sal_fix, vendas, coms, sal_fim
  
  escreva ("qual seu salario: ")
  leia (sal_fix)

  escreva ("qual o valor de suas vendas: ")
  leia (vendas) 


  escreva (" qual o percentual de comissão sobre suas vendas: ")
  leia (coms)

  sal_fim = sal_fix+ vendas * (coms / 100)

  escreva ("\n O salario com comissão será: " + sal_fim)

  

  }
}
  

