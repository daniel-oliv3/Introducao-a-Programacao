algoritmo "semnome"
//10. Fa�a um programa que receba o sal�rio de um funcion�rio e o percentual de aumento, calcule e mostre o
//valor do aumento e o novo sal�rio:

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
