algoritmo "semnome"
// 32. Cada degrau de uma escada tem X de altura. Fa�a um algoritmo que receba a altura da escada e a altura em
//que uma determinada pessoa deseja alcan�ar subindo a escada, calcule e mostre quantos degraus ele dever�
//subir para atingir seu objetivo, sem se preocupar com a altura da pessoa. As medidas fornecidas da escada
//devem est� em metros e a medida do degrau em cent�metros:

var
  dg, au, qnt: real
inicio
escreva("Informe a altura do degrau: ")
leia(dg)
escreva("Informe a altura que deseja chegar: ")
leia(au)
qnt <- au/dg;
escreva("A quantidade de degraus necessario �: ",qnt)

fimalgoritmo
