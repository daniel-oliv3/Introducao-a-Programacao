algoritmo "semnome"
// 44. Escreva um algoritmo que leia tr�s n�meros inteiros (A, B, C) e calcule a seguinte express�o:
//D = R + S sabendo que: R = ( A + B )2 e S = ( B + C )2
//2

var
A, B, C: inteiro
R, D, S: real
inicio
escreva("Informe o primeiro n�mero inteiro: ")
leia(A)
escreva("Informe o segundo n�mero inteiro: ")
leia(B)
escreva("Informe o terceiro n�mero inteiro: ")
leia(C)
R <- (A+B)^2;
S <- (B+C)^2;
D <- (R+S)/2;
escreva("O resultado da express�o �: ",D)
fimalgoritmo
