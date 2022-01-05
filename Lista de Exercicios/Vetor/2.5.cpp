#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#define NUM_ALUNOS 6

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	float notas[NUM_ALUNOS], media, soma=0.0;
	int i;
	for(i=0; i< NUM_ALUNOS; i++){
		printf(" Entre com a nota do aluno %dº: ",i+1);
		scanf("%f",&notas[i]);
	}
	for(i=0; i < NUM_ALUNOS; i++){
		soma=soma+notas[i];
	}
	media=soma/NUM_ALUNOS;
	printf(" Média da turma = %.2f\n",media);
	system("Pause");
	return 0;
}

