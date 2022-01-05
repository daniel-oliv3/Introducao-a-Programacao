algoritmo "semnome"
// 18. Uma pessoa comprou cinco artigos em uma loja. Para cada artigo, tem-se nome, preço e percentual de
//desconto. Faça um algoritmo que imprima o nome, preço e o preço com desconto de cada artigo da loja. No
//final apresente também o total a pagar:

var
 nome1, nome2, nome3, nome4, nome5: caractere
 pro1, pro2, pro3, pro4, pro5: real
 perc1, perc2, perc3, perc4, perc5: real
 result1, result2, result3, result4, result5, total: real

inicio

escreva("Informe o nome do primeiro produto: ")
leia(nome1)
escreva("Informe o preço do produto: ")
leia(pro1)
escreva("Informe o percentual de desconto: ")
leia(perc1)

result1 <- pro1-(pro1*perc1/100);

escreva("Informe o nome do segundo produto: ")
leia(nome2)
escreva("Informe o preço do produto: ")
leia(pro2)
escreva("Informe o percentual de desconto: ")
leia(perc2)

result2 <- pro2-(pro2*perc2/100);


escreva("Informe o nome do terceiro produto: ")
leia(nome3)
escreva("Informe o preço do produto: ")
leia(pro3)
escreva("Informe o percentual de desconto: ")
leia(perc3)

result3 <- pro3-(pro3*perc3/100);

escreva("Informe o nome do quarto produto: ")
leia(nome4)
escreva("Informe o preço do produto: ")
leia(pro4)
escreva("Informe o percentual de desconto: ")
leia(perc4)

result4 <- pro4-(pro4*perc4/100);

escreva("Informe o nome do quinto produto: ")
leia(nome5)
escreva("Informe o preço do produto: ")
leia(pro5)
escreva("Informe o percentual de desconto: ")
leia(perc5)

result5 <- pro5-(pro5*perc5/100);

escreval("O ",nome1," era de ",pro1," agora é: ", result1)
escreval("O ",nome2," era de ",pro2," agora é: ", result2)
escreval("O ",nome3," era de ",pro3," agora é: ", result3)
escreval("O ",nome4," era de ",pro4," agora é: ", result4)
escreval("O ",nome5," era de ",pro5," agora é: ", result5)

total <- perc1+perc2+perc3+perc4+perc5;

escreva("O total sera: R$: ",total)

fimalgoritmo
