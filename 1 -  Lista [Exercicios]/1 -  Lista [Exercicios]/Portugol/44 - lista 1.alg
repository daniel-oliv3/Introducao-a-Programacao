algoritmo "semnome"
// 44. Escreva um algoritmo que leia três números inteiros (A, B, C) e calcule a seguinte expressão:
//D = R + S sabendo que: R = ( A + B )2 e S = ( B + C )2
//2

var
A, B, C: inteiro
R, D, S: real
inicio
escreva("Informe o primeiro número inteiro: ")
leia(A)
escreva("Informe o segundo número inteiro: ")
leia(B)
escreva("Informe o terceiro número inteiro: ")
leia(C)
R <- (A+B)^2;
S <- (B+C)^2;
D <- (R+S)/2;
escreva("O resultado da expressão é: ",D)
fimalgoritmo
