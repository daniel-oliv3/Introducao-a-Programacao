#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// 03 - Fa�a um algoritmo que leia tr�s numeros inteiros positivos e efetue o calculo de uma das seguintes medias de acordo com um vetor numerico informado pelo usuario.

int main()
{
	setlocale(LC_ALL, "portuguese");
	float x, y, z, m; 
	int op;
	printf("Infome o primeiro n�mero inteiro positivo: \n");
	scanf("%f",&x);
	printf("Infome o segundo n�mero inteiro positivo: \n");
	scanf("%f",&y);
	printf("Infome o terceiro n�mero inteiro positivo: \n");
	scanf("%f",&z);
	printf("Informe a Tipo de M�dia:\n");
	printf("[1] Geom�trica\n");
	printf("[2] Ponderada\n");
	printf("[3] Harm�nica\n");
	printf("[4] Ar�tmetica\n");
	scanf("%d",&op);
	switch(op){
		case 1:
			m = x*y*z;
			printf("M�dia Geom�trica: %.2f\n",m);
			break;
		case 2:	
			m = (x+2*y+3*z)/6;
			printf("M�dia Ponderada: %.2f\n",m);
			break;
		case 3:
			m = 1/((1/x) + (1/y) + (1/z));
			printf("M�dia Harm�nica: %.2f\n",m);
			break;
		case 4:
			m = (x+y+z)/3;
			printf("M�dia Ar�tmetica: %.2f\n",m);
			break;
		default:
			printf("O n�mero tem que est� entre [1 e 4]\n");			
	}
	system("Pause");
	return 0;
}

