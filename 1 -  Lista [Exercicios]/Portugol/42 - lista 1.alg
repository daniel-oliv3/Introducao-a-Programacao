algoritmo "semnome"
// 42. Um motorista deseja colocar no seu tanque X reais de gasolina. Escreva um algoritmo para ler o preço do
//litro da gasolina e o valor do pagamento, e exibir quantos litros ele conseguiu colocar no tanque.

var
x, valor, total: real
inicio
escreva("Informe o preço da gasolina: ")
leia(x)
escreva("Informe o valor em reais: ")
leia(valor)
total <- x/valor;
escreva("O total de litros de gasolina é: ",total)
fimalgoritmo
