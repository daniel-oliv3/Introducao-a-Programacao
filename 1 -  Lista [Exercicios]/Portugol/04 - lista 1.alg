algoritmo "semnome"

//4. Faça um algoritmo que leia um valor em reais e a cotação do dólar atual. Em seguida, imprima o valor
//correspondente em dólares:

var
   reais, cotacao, conversao: real
inicio
      escreva("Informe Um Valor Em Reais: ")
      leia(reais)
      escreva("Informe o Valor da Cotação do Dólar Atual: ")
      leia(cotacao)
      conversao <- reais*cotacao;
      escreva("O Valor Correspondente em Dólar é: ",conversao)
fimalgoritmo
