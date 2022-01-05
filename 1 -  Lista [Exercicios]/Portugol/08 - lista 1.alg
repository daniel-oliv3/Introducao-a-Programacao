algoritmo "semnome"
// 8. O índice de massa corpórea (IMC) de uma pessoa é igual ao seu peso (em quilogramas) dividido pelo
//quadrado de sua altura (em metros). Faça um algoritmo que receba o peso e altura de uma pessoa e informe
//o valor de seu IMC:

var
  peso, altura, imc: real
inicio
      escreva("Informe o Seu Peso: ")
      leia(peso)
      escreva("Informe Sua Altura: ")
      leia(altura)
      imc <- peso/(altura*altura)
      escreva("O Seu Valor de IMC é: ",imc)

fimalgoritmo
