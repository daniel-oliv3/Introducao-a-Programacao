algoritmo "semnome"

//02 - FAÇA UM ALGORITMO QUE CALCULE O ANO DE NASCIMENTO DE UMA PESSOA A PARTIR DE SUA IDADE ATUAL;
var

   anoAT, idade, anoNascimento: inteiro


inicio

      escreva("Digite a Sua Idade: ")
      leia(idade)
      escreva("Digite o Ano Atual: ")
      leia(anoAT)
      
      idade <- anoAT-idade;
      
      escreva("Seu Ano De Nascimento é: ",idade)


fimalgoritmo
