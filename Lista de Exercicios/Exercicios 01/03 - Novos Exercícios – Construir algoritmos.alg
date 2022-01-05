algoritmo "semnome"
// 3 - Faça um algoritmo que leia três números, mostre o resultado da
// multiplicação dos dois primeiros e somar o resultado da multiplicação
// com o terceiro número:

var
   num1, num2, num3, mult, soma: inteiro
inicio

      escreva("Digite o primeiro numero: ")
      leia(num1)
      escreva("Digite o segundo numero: ")
      leia(num2)
      escreva("Digite o terceiro numero: ")
      leia(num3)
      mult <- num1*num2;
      soma <- mult+num3;
      escreval("O resultado da multiplicação dos dois primeiros numeros e: ",mult)
      escreval("O resultado da soma do resultado com o terceiro numero e: ",soma)
fimalgoritmo

