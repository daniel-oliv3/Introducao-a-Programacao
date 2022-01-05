algoritmo "semnome"
// 33. Saymon comprou um saco de ração com peso em quilos. Ele possui dois gatos, para os quais fornece a
//quantidade de ração em gramas. A quantidade diária de ração fornecida para cada gato é sempre a mesma.
//Faça um algoritmo que receba o peso do saco de ração e a quantidade de ração fornecida para cada gato,
//calcule e mostre quanto restará de ração no saco após seis dias:

var
   pesoracao, cat1, cat2, m, pm, d: real
inicio

escreva("Informe o peso da ração em kg: ")
leia(pesoracao)
escreva("Informe a quantidade de ração fornecida para o gato 1 em gramas: ")
leia(cat1)
escreva("informe a quantidade de ração fornecida para o gato 2 em gramas: ")
leia(cat2)
m <- (cat1*6)+(cat2*6);
pm <- pesoracao*1000;
d <- pm-m;
escreva("Após seis dias ainda restou ",d/1000, " de ração no saco: ")

fimalgoritmo
