#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*  INTRODUÇÃO À PROGRAMAÇÃO
Prof. Sérgio Roberto Costa Vieira - Estrutura de Repetição Aninhada
ESTRUTURAS DE REPETIÇÃO;
*/

/* 1. Faça um programa que leia o número de termos da série (N), determine e mostre o valor de S, sendo:
S = N + N-1 + ... + 3 + 2 + 1
N N N N N;*/


int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int c;
	float  n, s=0;
	printf("  Digite um número: ");
	scanf("%f",&n);
	for(c=n; c>=1;  c--){ // para(c recebe n; c maior o igual a 1; c menos menos)faça
		s+=c/n; // s mais igual a c dividido por n; 
	}
	printf("  O valor de S: %.2f\n",s); // imprime resultado;
	system("Pause");
	return 0;
}

/* Aluno: Daniel Oliveira de Souza;
   Faculdade: FUCAPI;
*/
