algoritmo "semnome"
// 30. Fa�a um algoritmo que:
//a) Obtenha o valor para a vari�vel HT (horas trabalhadas no m�s);
//b) Obtenha o valor para a vari�vel VH (valor hora trabalhada):
//c) Obtenha o valor para a vari�vel PD (percentual de desconto);
//d) Calcule o sal�rio bruto;
//e) Calcule o total de desconto;
//f) Calcule o sal�rio l�quido;
//g) Apresente os valores de: Horas trabalhadas, Sal�rio Bruto, Desconto, Sal�rio Liquido.

var
  HT, VH, PD, SB, TD, SL: real
inicio
escreva("Informe o valor de horas trabalhadas no m�s: ")
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
escreval("O valor do sal�rio bruto �: ",SB)
escreval("O valor do desconto �: ", TD)
escreval("O valor do sal�rio l�quido �: ", SL)
escreval("O valor de horas trabalhadas �: ",HT)

fimalgoritmo
