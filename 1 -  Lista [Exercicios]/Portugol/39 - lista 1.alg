algoritmo "semnome"
// 39. Faça um algoritmo que receba a quantidade de dinheiro em reais que uma pessoa que vai viajar possui. Ela
//vai passar por vários países e precisa converter seu dinheiro em dólares, marco alemão e libras. Sabendo-se
//que a cotação do dólar é de R$ 1,98; de marco alemão de R$ 2,10; e libras de R$ 2,65. O algoritmo deve
//fazer as conversões e mostrar os resultados:

var
reais, dolar, marco, libras: real
inicio
escreva("Informe a quantidade de dinheiro em reais para a viajem: ")
leia(reais)
dolar <- reais/1.98;
marco <- reais/2.10;
libras <-  reais/2.65;
escreval("O valor convertido de real para dólar é: ",dolar)
escreval("O valor convertido de real para marco alemão é: ",marco)
escreval("O valor convertido de real para libras é: ",libras)

fimalgoritmo
