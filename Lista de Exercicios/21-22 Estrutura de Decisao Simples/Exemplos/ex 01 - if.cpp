#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//exemplo 1, pg17

int main()
{
	setlocale(LC_ALL, "portuguese");
	float p1, p2, media=0;
	printf("Entre com 1a nota: \n");
	scanf("%f",&p1);
	printf("Entre com 2a nota: \n");
	scanf("%f",&p2);
	media = (p1+p2)/2;
	if(media>=5){
		printf("Aluno Aprovado!\n");
	}
	system("Pause");
	return 0;
}

