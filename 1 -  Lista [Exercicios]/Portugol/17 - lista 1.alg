algoritmo "semnome"
//17. Existem épocas de pouco dinheiro, onde os supermercados estão procurando maneiras para atrair clientes e
//aumentar suas vendas, a estratégia mais utilizada é a oferta de desconto. Faça um algoritmo que leia o valor
//de uma mercadoria do supermercado e mostre para o cliente o novo valor, tendo em vista que o desconto do
//produto é de 21%:

var
  valor, novoValor, desconto: real
inicio

      escreva("Informe o valor do produto: ")
      leia(valor)
      desconto <- valor*21/100;
      novoValor <- valor-desconto;
      escreva("O valor do produto com desconto de 21% é: ",novoValor)
fimalgoritmo
