algoritmo "semnome"
// Faça um algoritmo que receba um capital C, uma taxa de juros mensal fixa J e um período de aplicação em
//meses M, calcule e mostre o montante F arrecadado no final do período: F = C*(1+J/100)M

var
   c, j, y, x, m, f: real

inicio

      escreva("Informe o Capital: ")
      leia(c)
      escreva("Informe a tava de juros mensal: ")
      leia(j)
      escreva("Informe o periodo em meses: ")
      leia(m)
      f <- C*(1+j/100)**m;
      escreva("O montante F arrecadado no final do periodo é: ",f)
      
fimalgoritmo
