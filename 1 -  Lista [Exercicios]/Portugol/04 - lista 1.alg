algoritmo "semnome"

//4. Fa�a um algoritmo que leia um valor em reais e a cota��o do d�lar atual. Em seguida, imprima o valor
//correspondente em d�lares:

var
   reais, cotacao, conversao: real
inicio
      escreva("Informe Um Valor Em Reais: ")
      leia(reais)
      escreva("Informe o Valor da Cota��o do D�lar Atual: ")
      leia(cotacao)
      conversao <- reais*cotacao;
      escreva("O Valor Correspondente em D�lar �: ",conversao)
fimalgoritmo
