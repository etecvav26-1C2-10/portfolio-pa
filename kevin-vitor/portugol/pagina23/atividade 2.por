/* Nome: Kevin Silva Fernandes
 *  turma:1ºC2
 *  Etec Vasco Antônio Venchiarutti
 *  Descriçaõ: Ler três números e verificar se eles formam um triângulo. Caso formem, identificar se é:

Equilátero (todos os lados iguais)
Isósceles (dois lados iguais)
Escaleno (todos os lados diferentes)
 */



programa {
  funcao inicio() {
    
    real a, b, c

    escreva("Digite o primeiro lado: ")
    leia(a)
    escreva("Digite o segundo lado: ")
    leia(b)
    escreva("Digite o terceiro lado: ")
    leia(c)

    // Verifica se forma um triângulo
    se (a < b + c e b < a + c e c < a + b) {

      escreva("Forma um triângulo\n")

      // Classificação
      se (a == b e b == c) {
        escreva("Triângulo Equilátero")
      }
      senao se (a == b ou a == c ou b == c) {
        escreva("Triângulo Isósceles")
      }
      senao {
        escreva("Triângulo Escaleno")
      }

    }
    senao {
      escreva("Não forma um triângulo")
    }

  }
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 288; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */