algoritmo "semnome"
// 38. Sabe-se que o quilowatt de energia custa um sexto do sal�rio m�nimo. Fa�a um algoritmo que receba o valor
//do sal�rio m�nimo e a quantidade de quilowatts consumida por uma resid�ncia. Calcule e mostre:
//a) O valor de cada quilowatts;
//b) O valor a ser pago por essa resid�ncia;
//c) O valor a ser pago com 15% de desconto;

var
quilowatt, salario, valortotal, valorpagar, qw: real
inicio
escreva("Informe o valor do sal�rio minimo a receber: ")
leia(salario)
escreva("Informe a quantidade de quilowatts consumida por uma resid�ncia: ")
leia(quilowatt)
qw <- salario/6;
valortotal <- quilowatt*qw;
valorpagar <- valortotal*0.15/100;
escreval("O valor de cada quilowatts �: ",quilowatt)
escreval("O valor a ser pago por essa resid�ncia �: ",valortotal)
escreval("O valor a ser pago com 15% de desconto �: ",valorpagar)

fimalgoritmo
