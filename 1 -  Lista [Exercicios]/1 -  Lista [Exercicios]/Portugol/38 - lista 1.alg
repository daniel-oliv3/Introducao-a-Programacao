algoritmo "semnome"
// 38. Sabe-se que o quilowatt de energia custa um sexto do salário mínimo. Faça um algoritmo que receba o valor
//do salário mínimo e a quantidade de quilowatts consumida por uma residência. Calcule e mostre:
//a) O valor de cada quilowatts;
//b) O valor a ser pago por essa residência;
//c) O valor a ser pago com 15% de desconto;

var
quilowatt, salario, valortotal, valorpagar, qw: real
inicio
escreva("Informe o valor do salário minimo a receber: ")
leia(salario)
escreva("Informe a quantidade de quilowatts consumida por uma residência: ")
leia(quilowatt)
qw <- salario/6;
valortotal <- quilowatt*qw;
valorpagar <- valortotal*0.15/100;
escreval("O valor de cada quilowatts é: ",quilowatt)
escreval("O valor a ser pago por essa residência é: ",valortotal)
escreval("O valor a ser pago com 15% de desconto é: ",valorpagar)

fimalgoritmo
