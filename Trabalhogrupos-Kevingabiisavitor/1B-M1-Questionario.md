## Kevin Silva Fernandes - Exercício 1 - Pergunta conceitual ##
- Explique com suas próprias palavras:

  o que é um algoritmo
  qual é a relação entre lógica de programação e algoritmos

Apresente também um exemplo simples de algoritmo do cotidiano.

R: Algoritmo é uma sequência de intruções para resolver um problema ou excutar certas ações

R: A logica é o racínio que o codigo deve seguir enquanto o Algoritmo é a sequência de passos para executar um programa.

## Vitor Moretti - Exercício 2 - Pergunta de aplicação ##
- Considere o seguinte problema:

Um programa deve receber três números e mostrar qual deles é o maior.

Descreva um algoritmo em linguagem natural para resolver esse problema.
Se possível, represente esse algoritmo em pseudocódigo ou Portugol.

R: Primeiro é preciso saber o valor dos três numeros, depois, verificar se o primeiro é maior que os demais, assim como com o segundo e o terceiro. Também é preciso comparar os três numeros e verificar se todos são iguais. 

programa {
  funcao inicio() {
    
  inteiro num1 ,num2, num3

  escreva ("digite o primeiro numero ")
    leia (num1)
    limpa()

  escreva ("digite o segundo numero ")
    leia (num2)
    limpa()

  escreva ("digite o terceiro numero ")
    leia (num3)
    limpa()


  se (num1 == num2){
  	se (num1 == num3){
    escreva ("todos os numeros são iguais")
  	}
  }
  

  se (num1 > num2) {
    se (num1 > num3)
    {
      escreva ("o maior numero é " + num1)

  }
  }

  se (num2 > num1) {
    se (num2 > num3)
    {
      escreva ("o maior numero é " + num2)

  }
  }

  se (num3 > num2) {
    se (num3 > num1)
    {
      escreva ("o maior numero é " + num3)

  }
  }
    
  }
}

**Gabriely Alves-Exercício 3**

1. O Portugol Studio é um ambiente de desenvolvimento integrado (IDE) gratuito e educacional, desenvolvido em português, ideal para iniciantes. Ele utiliza a linguagem Portugol (pseudocódigo) para ensinar lógica de programação de forma simplificada, permitindo criar algoritmos, console-based programs e até jogos simples sem a complexidade de linguagens reais

```
  programa
{
    funcao inicio()
    {
        inteiro numero

        escreva("Digite um número: ")
        leia(numero)

        escreva("O dobro do número é: ", numero * 2)
    }
}

```
Usar o portugol é fácil e a interface é organizada e facil de entender o programa.
