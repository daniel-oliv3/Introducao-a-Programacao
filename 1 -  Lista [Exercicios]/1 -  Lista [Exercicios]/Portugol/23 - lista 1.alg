algoritmo "semnome"
//23. Todo restaurante, embora por lei n�o possa obrigar o cliente a pagar, cobra 10% de comiss�o para o gar�om.
//Fa�a um algoritmo que leia o valor gasto com as despesas realizadas em um restaurante e imprima o valor
//total com a gorjeta:

var
  valorconta, valortotal: real
inicio
      escreva("Informe o valor da conta: ")
      leia(valorconta)
      valortotal <- valorconta*1.1;
      escreval("O valor total da conta com a gorjeta e: ",valortotal)
fimalgoritmo
