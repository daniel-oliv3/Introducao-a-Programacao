#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 3�. LISTA DE EXERC�CIOS - INTRODU��O � PROGRAMA��O
Prof. S�rgio Roberto Costa Vieira � Estrutura de Repeti��o*/

// ESTRUTURA �For - Para�

/* 01 - Fa�a um algoritmo que leia 50 n�meros e mostre o menor dos n�meros informados::*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int num, r, n=1, menor;
	printf("  Digite o %d� n�mero: ",n);
	scanf("%d",&num);
	menor=num;
	for(n=1; n<=49; n++){
		printf("  Digite o %d� n�mero: ",n+1);
		scanf("%d",&num);
		if(num<menor){
			menor=num;
		}
	}
	printf("........................\n\n");
	printf("\n    Menor n�mero: %d\n",menor);
	system("Pause");
	return 0;
}

/* Aluno: Daniel Oliveira de Souza;
Faculdade: FUCAPI;*/

