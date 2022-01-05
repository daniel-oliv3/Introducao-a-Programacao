algoritmo "semnome"
// 28. O restaurante a quilo Bem-Bão cobra R$24,00 por cada quilo de refeição. Escreva um algoritmo que leia o
//peso do prato montado pelo cliente (em quilos) e imprima o valor a pagar. Assuma que a balança já desconte
//o peso do prato:

var
  pesoprato, precokilo, valortotal: real
inicio

      escreva("Informe o peso em Kg: ")
      leia(pesoprato)
      precokilo <- 24.00;
      valortotal <- pesoprato*precokilo;
      escreval("O total a pagar é: ",valortotal)

fimalgoritmo
