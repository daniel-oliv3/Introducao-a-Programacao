algoritmo "semnome"
// 27. Considerando que, para um consórcio, sabe-se o número total de prestações, a quantidade de prestações
//pagas e o valor atual da prestação, escreva um algoritmo que determine o total pago pelo consorciado e o
//saldo devedor:

var
   qtp, qpp, vap, tp, sd: real
   
inicio

escreva("Insira a quantidade total de prestações: ")
leia(qtp)
escreva("Insira a quantidade de prestações pagas: ")
leia(qpp)
escreva("Entre com o valor atual das prestações: ")
leia(vap)
tp <- qtp*vap;
sd <- vap*(tp-qtp);
escreval("Voce ja pagou: ",tp)
escreval("Seu saldo devedor é:",sd)

fimalgoritmo
