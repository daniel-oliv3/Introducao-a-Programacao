algoritmo "semnome"
// 15. Considerando uma elei��o de apenas dois candidatos, elabore um algoritmo que leia do teclado o n�mero de
//eleitores, o n�mero de votos do primeiro candidato e o n�mero de votos do segundo candidato. Em seguida,
//o algoritmo dever� apresentar o percentual de votos de cada um dos candidatos e o percentual de votos
//nulos:

var
   eleitores, cand1, cand2: inteiro

inicio

      escreva("Informe o Total de Eleitores: ")
      leia(eleitores)
      escreva("Informe o Total de Votos do Candidato 1: ")
      leia(cand1)
      escreva("Informe o Total de Votos do Candidato 2: ")
      leia(cand2)
      
      escreval("O Percentual de Votos do Candidato 1 �: ",cand1/eleitores*100)
      escreval("O Percentual de Votos do Candidato 2 �: ",cand2/eleitores*100)
      escreval("O Percentual de Votos Nulos �: ",(eleitores - (cand1 + cand2))/eleitores*100)
fimalgoritmo
