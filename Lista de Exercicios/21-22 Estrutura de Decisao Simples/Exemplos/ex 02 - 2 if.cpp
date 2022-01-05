#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// exemplo 2, pg 19

int main()
{
	setlocale(LC_ALL, "portuguese");
	float p1, p2, media;
	printf("Entre com 1a nota: \n");
	scanf("%f",&p1);
	printf("Entre com 2a nota: \n");
	scanf("%f",&p2);
	media = (p1+p2)/2;
	if(media>=5){
		printf("Aluno Aprovado!\n");
	}
	if(media<5){
		printf("Aluno Reprovado!\n");
	}	
	system("Pause");
	return 0;
}

