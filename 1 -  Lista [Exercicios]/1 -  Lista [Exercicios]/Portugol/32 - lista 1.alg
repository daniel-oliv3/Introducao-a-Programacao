algoritmo "semnome"
// 32. Cada degrau de uma escada tem X de altura. Faça um algoritmo que receba a altura da escada e a altura em
//que uma determinada pessoa deseja alcançar subindo a escada, calcule e mostre quantos degraus ele deverá
//subir para atingir seu objetivo, sem se preocupar com a altura da pessoa. As medidas fornecidas da escada
//devem está em metros e a medida do degrau em centímetros:

var
  dg, au, qnt: real
inicio
escreva("Informe a altura do degrau: ")
leia(dg)
escreva("Informe a altura que deseja chegar: ")
leia(au)
qnt <- au/dg;
escreva("A quantidade de degraus necessario é: ",qnt)

fimalgoritmo
