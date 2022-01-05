algoritmo "semnome"
// 26. Faça um algoritmo para calcular a quantidade de dinheiro gasta por um fumante. Dados: o número de anos
//que ele fuma, o número de cigarros fumados por dia e o preço de uma carteira:

var
  preco, cigarros, anos, totalcigarrosdias, result: real
inicio
      escreva("Informe o número de cigarros fumados por dia: ")
      leia(cigarros)
      escreva("Informe o número de anos fumados: ")
      leia(anos)
      escreva("Informe o preço de uma carteira de cigarro: ")
      leia(preco)
      totalcigarrosdias <- (anos*365)*cigarros;
      result <- totalcigarrosdias*preco/20;
      escreval("O total gasto em dinheiro é: ",result)

fimalgoritmo
