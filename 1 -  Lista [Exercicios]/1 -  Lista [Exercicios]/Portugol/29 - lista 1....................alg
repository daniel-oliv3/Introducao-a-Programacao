algoritmo "semnome"
// 29. Fa�a um algoritmo que receba o n�mero de lados de um pol�gono convexo, calcule e mostre o n�mero de
//diagonais desse pol�gono. Sabe-se que ND = N * (N - 3)/2, em que N � o n�mero de lados do pol�gono:

var
  N, ND: inteiro
inicio

      escreva("Informe o numero de lados de um poligano convexo: ")
      leia(N)
      ND <- N*(N-3)/2;
      escreva("O numero de diagonais desse poligano e: ",ND)
fimalgoritmo
