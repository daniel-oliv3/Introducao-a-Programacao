#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//15. Considerando uma elei��o de apenas dois candidatos, elabore um algoritmo que leia do teclado o n�mero de
//eleitores, o n�mero de votos do primeiro candidato e o n�mero de votos do segundo candidato. Em seguida,
//o algoritmo dever� apresentar o percentual de votos de cada um dos candidatos e o percentual de votos
//nulos:



int main()
{
	setlocale(LC_ALL, "portuguese");
	
	int eleitores, cand1, cand2;
	
	printf("Informe o total de eleitores: ");
	scanf("%d",&eleitores);
	printf("Informe o total de votos do candidato 1: ");
	scanf("%d",&cand1);
	printf("Informe o total de votos do candidato 2: ");
	scanf("%d",&cand2);
	
	printf("O percentual de votos do candidato 1 �: %d\n",cand1/eleitores*100);
	printf("O percentual de votos do candidato 2 �: %d\n",cand2/eleitores*100);
	printf("O percentual de votos nulos e: %d\n",(eleitores - (cand1-cand2))/eleitores*100);
	
	system("pause");
	return 0;
}
