algoritmo "semnome"
// 30. Faça um algoritmo que:
//a) Obtenha o valor para a variável HT (horas trabalhadas no mês);
//b) Obtenha o valor para a variável VH (valor hora trabalhada):
//c) Obtenha o valor para a variável PD (percentual de desconto);
//d) Calcule o salário bruto;
//e) Calcule o total de desconto;
//f) Calcule o salário líquido;
//g) Apresente os valores de: Horas trabalhadas, Salário Bruto, Desconto, Salário Liquido.

var
  HT, VH, PD, SB, TD, SL: real
inicio
escreva("Informe o valor de horas trabalhadas no mês: ")
leia(HT)
escreva("Informe o valor horas trabalhadas: ")
leia(VH)
escreva("Informe o valor do percentual de desconto: ")
leia(PD)
PD <- PD/100;
SB <- HT*VH;
TD <- PD*SB;
SL <- SB-TD;
HT <-VH/3;
escreval("O valor do salário bruto é: ",SB)
escreval("O valor do desconto é: ", TD)
escreval("O valor do salário líquido é: ", SL)
escreval("O valor de horas trabalhadas é: ",HT)

fimalgoritmo
