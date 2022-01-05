#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 3ª. LISTA DE EXERCÍCIOS - INTRODUÇÃO À PROGRAMAÇÃO
Prof. Sérgio Roberto Costa Vieira – Estrutura de Repetição*/

// ESTRUTURA “For - Para”

/* 01 - Faça um algoritmo que leia 50 números e mostre o menor dos números informados::*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int num, r, n=1, menor;
	printf("  Digite o %dº número: ",n);
	scanf("%d",&num);
	menor=num;
	for(n=1; n<=49; n++){
		printf("  Digite o %dº número: ",n+1);
		scanf("%d",&num);
		if(num<menor){
			menor=num;
		}
	}
	printf("........................\n\n");
	printf("\n    Menor número: %d\n",menor);
	system("Pause");
	return 0;
}

/* Aluno: Daniel Oliveira de Souza;
Faculdade: FUCAPI;*/

