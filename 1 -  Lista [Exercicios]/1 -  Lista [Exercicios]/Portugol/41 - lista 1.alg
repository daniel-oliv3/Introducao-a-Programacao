algoritmo "semnome"
// 41. Para v�rios tributos, a base de c�lculo � o sal�rio m�nimo. Fazer um algoritmo que leia o valor do sal�rio
//m�nimo e o valor do sal�rio de uma pessoa. Calcular e exibir quantos sal�rios m�nimos esta pessoa ganha:

var
salario, minimo, total: real
inicio
escreva("Informe o valor do sal�rio minimo: ")
leia(minimo)
escreva("Informe o valor do seu sal�rio: ")
leia(salario)
total <- salario/minimo;
escreva("Voc� recebe: ", total , " sal�rio minimos. ")

fimalgoritmo
