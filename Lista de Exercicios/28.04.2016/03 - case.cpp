#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// 03 - Faça um algoritmo que leia três numeros inteiros positivos e efetue o calculo de uma das seguintes medias de acordo com um vetor numerico informado pelo usuario.

int main()
{
	setlocale(LC_ALL, "portuguese");
	float x, y, z, m; 
	int op;
	printf("Infome o primeiro número inteiro positivo: \n");
	scanf("%f",&x);
	printf("Infome o segundo número inteiro positivo: \n");
	scanf("%f",&y);
	printf("Infome o terceiro número inteiro positivo: \n");
	scanf("%f",&z);
	printf("Informe a Tipo de Média:\n");
	printf("[1] Geométrica\n");
	printf("[2] Ponderada\n");
	printf("[3] Harmônica\n");
	printf("[4] Arítmetica\n");
	scanf("%d",&op);
	switch(op){
		case 1:
			m = x*y*z;
			printf("Média Geométrica: %.2f\n",m);
			break;
		case 2:	
			m = (x+2*y+3*z)/6;
			printf("Média Ponderada: %.2f\n",m);
			break;
		case 3:
			m = 1/((1/x) + (1/y) + (1/z));
			printf("Média Harmônica: %.2f\n",m);
			break;
		case 4:
			m = (x+y+z)/3;
			printf("Média Arítmetica: %.2f\n",m);
			break;
		default:
			printf("O número tem que está entre [1 e 4]\n");			
	}
	system("Pause");
	return 0;
}

