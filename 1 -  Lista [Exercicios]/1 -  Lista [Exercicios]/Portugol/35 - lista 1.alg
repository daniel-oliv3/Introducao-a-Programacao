algoritmo "semnome"
// 35. S�vio recebeu seu sal�rio e precisa pagar duas contas atrasadas. Em raz�o do atraso, ele dever� pagar multa
//de 2,5% sobre cada conta. Fa�a um algoritmo que calcule e mostre o quanto restar� do sal�rio de S�vio:

var
salario, conta1, conta2, novosaldo, multa1, multa2: real
inicio
escreva("informe o seu sal�rio a receber: ")
leia(salario)
escreva("Informe o valor da primeira conta atrasada: ")
leia(conta1)
escreva("Informe o valor da segunda conta atrasada: ")
leia(conta2)
multa1 <- conta1*02.5/100;
multa2 <- conta2*02.5/100;
novosaldo <- salario-multa1-multa2-conta1-conta2;
escreva("O saldo � de: ",novosaldo)

fimalgoritmo
