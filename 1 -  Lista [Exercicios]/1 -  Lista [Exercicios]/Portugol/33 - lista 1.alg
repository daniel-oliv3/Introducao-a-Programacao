algoritmo "semnome"
// 33. Saymon comprou um saco de ra��o com peso em quilos. Ele possui dois gatos, para os quais fornece a
//quantidade de ra��o em gramas. A quantidade di�ria de ra��o fornecida para cada gato � sempre a mesma.
//Fa�a um algoritmo que receba o peso do saco de ra��o e a quantidade de ra��o fornecida para cada gato,
//calcule e mostre quanto restar� de ra��o no saco ap�s seis dias:

var
   pesoracao, cat1, cat2, m, pm, d: real
inicio

escreva("Informe o peso da ra��o em kg: ")
leia(pesoracao)
escreva("Informe a quantidade de ra��o fornecida para o gato 1 em gramas: ")
leia(cat1)
escreva("informe a quantidade de ra��o fornecida para o gato 2 em gramas: ")
leia(cat2)
m <- (cat1*6)+(cat2*6);
pm <- pesoracao*1000;
d <- pm-m;
escreva("Ap�s seis dias ainda restou ",d/1000, " de ra��o no saco: ")

fimalgoritmo
