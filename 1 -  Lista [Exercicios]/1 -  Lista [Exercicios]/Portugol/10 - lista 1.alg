algoritmo "semnome"
//10. Faça um programa que receba o salário de um funcionário e o percentual de aumento, calcule e mostre o
//valor do aumento e o novo salário:

var
   salario, aumento, salariofinal: real
inicio
   escreva("Informe o seu salario: ")
   leia(salario)
   escreva("Informe o seu aumento, em porcentagem: ")
   leia(aumento)
   salariofinal<-(salario*(aumento/100))+salario;
   escreva("O salario final acrescido do aumento e: ",salariofinal)
fimalgoritmo
