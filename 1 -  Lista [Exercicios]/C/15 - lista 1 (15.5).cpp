#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "portuguese");
	
	int eleitores, cand1, cand2;
	float r1, r2, r;
	printf("Informe o total de eleitores: ");
	scanf("%d",&eleitores);
	printf("Informe o total de votos do candidato 1: ");
	scanf("%d",&cand1);
	printf("Informe o total de votos do candidato 2: ");
	scanf("%d",&cand2);
	r1 = cand1*eleitores/100;
	r2 = cand2*eleitores/100;
	r = (eleitores - (cand1-cand2))/eleitores*100;
	printf("O percentual de votos do candidato 1 é: %f\n",r1);
	printf("O percentual de votos do candidato 2 é: %f\n",r2);
	printf("O percentual de votos nulos e: %f\n",r);
	
	system("pause");
	return 0;
}

