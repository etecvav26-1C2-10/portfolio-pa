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

```
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
```

## Gabriely Alves-Exercício 3 ##

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

## Isabely Caconde-Exercício 4 ##

1. IDE's, bibliotecas e frameworks são essenciais para produtividade e pela redução de erros, e permite que os programadores foquem no que realmente importa, a lógica do problema. Elas oferecem recursos prontos e automatizações. Por exemplo, uma IDE como Visual Studio Code ajuda com autocompletar, depurar e organizar o código, já frameworks como React ou Django fornecem estruturas prontas para criar aplicações, evitando reinventar funcionalidades comuns como autenticação, rotas e interface; além disso, bibliotecas reutilizam código já testado, o que aumenta a confiabilidade e segurança do sistema.

2. Se os desenvolvedores construíseem os próprios componentes do zero, o desenvolvimento seria muito mais lento, a probabilidade erros iria aumentar significativamente, os projetos seriam mais caros de manter, além de que cada equipe teria sua própria maneira de resolver o problema, gerando inconsistência.
   Criar um sistema de login do zero exigiria implementar criptografia, validação, armazenamento seguro de senhas etc, com frameworks como Django, isso já vem pronto e testado.
Outro exemplo é criar interfaces web: sem react, seria necessário manipular diretamente o DOM, o que é mais complexo e propenso a erros.


