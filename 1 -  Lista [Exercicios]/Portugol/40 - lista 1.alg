algoritmo "semnome"
// 40. Uma f�brica de camisetas produz os tamanhos pequeno, m�dio e grande, cada uma sendo vendida
//respectivamente por 10, 12 e 15 reais. Construa um algoritmo em que o usu�rio forne�a a quantidade de
//camisetas pequenas, m�dias e grandes referentes a uma venda, e a m�quina informe quanto ser� o valor
//arrecadado:

var
p, m, g, p1, m1, g1, valort: real
inicio
escreva("Informe a quantidade de camiseta do tipo (P) pequeno: ")
leia(p)
escreva("Informe a quantidade de camiseta do tipo (M) m�dio: ")
leia(m)
escreva("Informe a quantidade de camiseta do tipo (G) grande: ")
leia(g)
p1 <- p*10;
m1 <- m*12;
g1 <- g*15;
valort <- p1+m1+g1;
escreva("O valor total da compra �: ",valort)

fimalgoritmo
