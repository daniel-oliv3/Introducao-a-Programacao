algoritmo "semnome"
//11. Criar um algoritmo que leia o saldo de uma aplica��o e mostre ap�s 30 dias (1 m�s) como resultado o novo
//saldo, considerando o reajuste de 6,5%:
var
   entrada, saida: real
inicio
      escreva("Informe o saldo a aplicar: ")
      leia(entrada)
      saida<-((entrada*6.5)/100)+entrada;
      escreva("Saida apos 30 dias e: ",saida)

fimalgoritmo
