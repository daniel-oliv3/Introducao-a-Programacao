algoritmo "semnome"
// 26. Fa�a um algoritmo para calcular a quantidade de dinheiro gasta por um fumante. Dados: o n�mero de anos
//que ele fuma, o n�mero de cigarros fumados por dia e o pre�o de uma carteira:

var
  preco, cigarros, anos, totalcigarrosdias, result: real
inicio
      escreva("Informe o n�mero de cigarros fumados por dia: ")
      leia(cigarros)
      escreva("Informe o n�mero de anos fumados: ")
      leia(anos)
      escreva("Informe o pre�o de uma carteira de cigarro: ")
      leia(preco)
      totalcigarrosdias <- (anos*365)*cigarros;
      result <- totalcigarrosdias*preco/20;
      escreval("O total gasto em dinheiro �: ",result)

fimalgoritmo
