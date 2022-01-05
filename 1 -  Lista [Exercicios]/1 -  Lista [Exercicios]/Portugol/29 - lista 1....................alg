algoritmo "semnome"
// 29. Faça um algoritmo que receba o número de lados de um polígono convexo, calcule e mostre o número de
//diagonais desse polígono. Sabe-se que ND = N * (N - 3)/2, em que N é o número de lados do polígono:

var
  N, ND: inteiro
inicio

      escreva("Informe o numero de lados de um poligano convexo: ")
      leia(N)
      ND <- N*(N-3)/2;
      escreva("O numero de diagonais desse poligano e: ",ND)
fimalgoritmo
