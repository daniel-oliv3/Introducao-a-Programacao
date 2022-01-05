algoritmo "semnome"
// 34. Pedrinho tem um cofrinho com muitas moedas, e deseja saber quantos reais conseguiu poupar. Faça um
//algoritmo para ler a quantidade de cada tipo de moeda, e imprimir o valor total economizado, em reais.
//Considere que existam moedas de 1, 5, 10, 25 e 50 centavos, e ainda moedas de 1 real. Não havendo moeda
//de um tipo, a quantidade respectiva deve ser zero:

var
       m1, m10, m5, m25, m50, r1, total: real
inicio

escreva("Informe a quantidades de moedas de 1 centavo: ")
leia(m1)
escreva("Informe a quantidades de moedas de 10 centavos: ")
leia(m10)
escreva("Informe a quantidades de moedas de 25 centavos: ")
leia(m25)
escreva("Informe a quantidades de moedas de 50 centavos: ")
leia(m50)
escreva("Informe a quantidades de moedas de 1 real: ")
leia(r1)
total = (m1*0.01)+(m5*0.05)+(m10*0.10)+(m25*0.25)+(m50*0.50)+(r1*1.00);
escreval("O total economizado é: ",total)

fimalgoritmo
