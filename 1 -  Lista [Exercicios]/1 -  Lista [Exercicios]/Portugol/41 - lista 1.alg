algoritmo "semnome"
// 41. Para vários tributos, a base de cálculo é o salário mínimo. Fazer um algoritmo que leia o valor do salário
//mínimo e o valor do salário de uma pessoa. Calcular e exibir quantos salários mínimos esta pessoa ganha:

var
salario, minimo, total: real
inicio
escreva("Informe o valor do salário minimo: ")
leia(minimo)
escreva("Informe o valor do seu salário: ")
leia(salario)
total <- salario/minimo;
escreva("Você recebe: ", total , " salário minimos. ")

fimalgoritmo
