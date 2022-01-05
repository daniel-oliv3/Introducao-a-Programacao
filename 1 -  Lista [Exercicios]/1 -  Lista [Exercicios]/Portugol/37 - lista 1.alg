algoritmo "semnome"
// 37. Faça um algoritmo que calcule a quantidade de litros de combustível gasta em uma viagem, utilizando um
//automóvel que faz 12Km por litro. Para obter o cálculo, o usuário deve fornecer o tempo gasto na viagem e
//a velocidade média durante ela. Desta forma, será possível obter a distância percorrida com a fórmula
//DISTANCIA = TEMPO * VELOCIDADE. Tendo o valor da distância, basta calcular a quantidade de litros
//de combustível utilizada na viagem. O algoritmo deve apresentar os valores da velocidade média, tempo
//gasto na viagem, a distância percorrida e a quantidade de litros utilizada na viagem:

var
   litros, distancia, tempo, velocidade, result: real
inicio
escreva("Informe a quantidade de litros gasto na viagem: ")
leia(litros)
escreva("Informe o tempo gasto na viagem: ")
leia(tempo)
escreva("Informe a velocidade média: ")
leia(velocidade)
distancia <- tempo*velocidade;
result <- distancia/12;
escreva("A quantidade de litros gasto na viagem é: ",result)

fimalgoritmo
