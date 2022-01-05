algoritmo "semnome"
// 22. Faça um algoritmo que receba o valor dos catetos de um triângulo, calcule e mostre o valor da hipotenusa:
var
   c1, c2, h: numerico
inicio
      escreva("Informe o valor do cateto oposto: ")
      leia(c1)
      escreva("Informe o valor do catesto adjacente: ")
      leia(c2)
      h <- ((c1^2)+(c2^2));
      escreva("O valor da hipotenusa e: ",h)
fimalgoritmo
