algoritmo "semnome"
// 37. Fa�a um algoritmo que calcule a quantidade de litros de combust�vel gasta em uma viagem, utilizando um
//autom�vel que faz 12Km por litro. Para obter o c�lculo, o usu�rio deve fornecer o tempo gasto na viagem e
//a velocidade m�dia durante ela. Desta forma, ser� poss�vel obter a dist�ncia percorrida com a f�rmula
//DISTANCIA = TEMPO * VELOCIDADE. Tendo o valor da dist�ncia, basta calcular a quantidade de litros
//de combust�vel utilizada na viagem. O algoritmo deve apresentar os valores da velocidade m�dia, tempo
//gasto na viagem, a dist�ncia percorrida e a quantidade de litros utilizada na viagem:

var
   litros, distancia, tempo, velocidade, result: real
inicio
escreva("Informe a quantidade de litros gasto na viagem: ")
leia(litros)
escreva("Informe o tempo gasto na viagem: ")
leia(tempo)
escreva("Informe a velocidade m�dia: ")
leia(velocidade)
distancia <- tempo*velocidade;
result <- distancia/12;
escreva("A quantidade de litros gasto na viagem �: ",result)

fimalgoritmo
