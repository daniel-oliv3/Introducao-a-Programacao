algoritmo "semnome"
// 35. Sávio recebeu seu salário e precisa pagar duas contas atrasadas. Em razão do atraso, ele deverá pagar multa
//de 2,5% sobre cada conta. Faça um algoritmo que calcule e mostre o quanto restará do salário de Sávio:

var
salario, conta1, conta2, novosaldo, multa1, multa2: real
inicio
escreva("informe o seu salário a receber: ")
leia(salario)
escreva("Informe o valor da primeira conta atrasada: ")
leia(conta1)
escreva("Informe o valor da segunda conta atrasada: ")
leia(conta2)
multa1 <- conta1*02.5/100;
multa2 <- conta2*02.5/100;
novosaldo <- salario-multa1-multa2-conta1-conta2;
escreva("O saldo é de: ",novosaldo)

fimalgoritmo
