algoritmo "semnome"
// 43. Construa um algoritmo que, tendo como dados de entrada dois pontos quaisquer no plano cartesiano,
//P(x1,y1) e P(x2,y2), escreva a dist�ncia entre eles. A f�rmula que efetua tal c�lculo �:

var
d, x1, x2, y1, y2: real
inicio
escreva("Informe o valor de x1: ")
leia(x1)
escreva("Informe o valor de y1: ")
leia(y1)
escreva("Informe o valor de x2: ")
leia(x2)
escreva("Informe o valor de y2: ")
leia(y2)
d <- raizq(((x2-x1)^2) + ((y2-y1)^2));
escreva("O resultado �: ",d)

fimalgoritmo
