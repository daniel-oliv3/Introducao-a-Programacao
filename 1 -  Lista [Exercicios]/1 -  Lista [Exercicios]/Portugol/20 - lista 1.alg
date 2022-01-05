algoritmo "semnome"
// 20. Faça um algoritmo que leia dois números inteiros, calcule e mostre um número elevado ao outro e viceversa:
var
    num1, num2, elev1, elev2: inteiro
inicio
      escreva("Informe o primeiro numero: ")
      leia(num1)
      escreva("Informe o segundo numero: ")
      leia(num2)
      elev1 <- num1**num2
      elev2 <- num2**num1
      escreval("O resultado do primeiro numero elevado ao segundo e: ",elev1)
      escreval("O resultado do segundo numero elevado ao primeiro e: ",elev2)
fimalgoritmo
