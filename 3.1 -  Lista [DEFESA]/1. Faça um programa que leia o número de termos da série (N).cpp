#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*  INTRODU��O � PROGRAMA��O
Prof. S�rgio Roberto Costa Vieira - Estrutura de Repeti��o Aninhada
ESTRUTURAS DE REPETI��O;
*/

/* 1. Fa�a um programa que leia o n�mero de termos da s�rie (N), determine e mostre o valor de S, sendo:
S = N + N-1 + ... + 3 + 2 + 1
N N N N N;*/


int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int c, n, cont;
	float s=0, x=0;
	printf("  Digite o n�mero de termos: ");
	scanf("%d",&n);
	x=n;
	for(c=n; c>=1; c--){
		s+=c/x;
	}
	printf("  O valor de S: %.2f\n",s);
	system("Pause");
	return 0;
}

/* Aluno: Daniel Oliveira de Souza;
   Faculdade: FUCAPI;
*/
