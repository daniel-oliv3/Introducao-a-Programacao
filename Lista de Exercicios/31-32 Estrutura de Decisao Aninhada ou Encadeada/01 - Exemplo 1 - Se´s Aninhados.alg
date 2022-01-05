algoritmo "01 - Exemplo 1 - Se´s Aninhados"

var
novo_salario, salario: real
inicio
escreva("Informe o salário: \n")
leia(salario)
se(salario>0 e salario<500)entao
    novo_salario<-salario*1.15;
    escreva("O novo salário é: %.2f\n",novo_salario)
senao
     se(salario<=1.000)entao
         novo_salario<-salario*1.10;
     senao
         novo_salario<-salario*1.05;
     fimse
fimse
escreval("O novo salario é: ",novo_salario)
fimalgoritmo
