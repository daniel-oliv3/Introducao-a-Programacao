algoritmo "semnome"
//17. Existem �pocas de pouco dinheiro, onde os supermercados est�o procurando maneiras para atrair clientes e
//aumentar suas vendas, a estrat�gia mais utilizada � a oferta de desconto. Fa�a um algoritmo que leia o valor
//de uma mercadoria do supermercado e mostre para o cliente o novo valor, tendo em vista que o desconto do
//produto � de 21%:

var
  valor, novoValor, desconto: real
inicio

      escreva("Informe o valor do produto: ")
      leia(valor)
      desconto <- valor*21/100;
      novoValor <- valor-desconto;
      escreva("O valor do produto com desconto de 21% �: ",novoValor)
fimalgoritmo
