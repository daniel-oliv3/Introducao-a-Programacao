algoritmo "semnome"
// 39. Fa�a um algoritmo que receba a quantidade de dinheiro em reais que uma pessoa que vai viajar possui. Ela
//vai passar por v�rios pa�ses e precisa converter seu dinheiro em d�lares, marco alem�o e libras. Sabendo-se
//que a cota��o do d�lar � de R$ 1,98; de marco alem�o de R$ 2,10; e libras de R$ 2,65. O algoritmo deve
//fazer as convers�es e mostrar os resultados:

var
reais, dolar, marco, libras: real
inicio
escreva("Informe a quantidade de dinheiro em reais para a viajem: ")
leia(reais)
dolar <- reais/1.98;
marco <- reais/2.10;
libras <-  reais/2.65;
escreval("O valor convertido de real para d�lar �: ",dolar)
escreval("O valor convertido de real para marco alem�o �: ",marco)
escreval("O valor convertido de real para libras �: ",libras)

fimalgoritmo
