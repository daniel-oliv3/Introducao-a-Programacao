algoritmo "semnome"
// 3 - Fa�a um algoritmo que leia tr�s n�meros, mostre o resultado da
// multiplica��o dos dois primeiros e somar o resultado da multiplica��o
// com o terceiro n�mero:

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
      escreval("O resultado da multiplica��o dos dois primeiros numeros e: ",mult)
      escreval("O resultado da soma do resultado com o terceiro numero e: ",soma)
fimalgoritmo

