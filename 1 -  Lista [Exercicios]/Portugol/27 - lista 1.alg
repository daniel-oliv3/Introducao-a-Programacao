algoritmo "semnome"
// 27. Considerando que, para um cons�rcio, sabe-se o n�mero total de presta��es, a quantidade de presta��es
//pagas e o valor atual da presta��o, escreva um algoritmo que determine o total pago pelo consorciado e o
//saldo devedor:

var
   qtp, qpp, vap, tp, sd: real
   
inicio

escreva("Insira a quantidade total de presta��es: ")
leia(qtp)
escreva("Insira a quantidade de presta��es pagas: ")
leia(qpp)
escreva("Entre com o valor atual das presta��es: ")
leia(vap)
tp <- qtp*vap;
sd <- vap*(tp-qtp);
escreval("Voce ja pagou: ",tp)
escreval("Seu saldo devedor �:",sd)

fimalgoritmo
