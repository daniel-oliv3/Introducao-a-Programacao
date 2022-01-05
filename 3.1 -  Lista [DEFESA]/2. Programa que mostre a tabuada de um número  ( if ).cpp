#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

/*  INTRODUÇÃO À PROGRAMAÇÃO
Prof. Sérgio Roberto Costa Vieira - Estrutura de Repetição Aninhada
ESTRUTURAS DE REPETIÇÃO;
*/

/* 2. Faça um programa que mostre a tabuada de um número qualquer, a partir do operador informado pelo usuário, os
operadores válidos são ( “ + ”, “ – ”, “ * ”, “ / ”):;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int  n, c;
	char op;
	printf("  Digite um número: ");
	scanf("%d",&n);
	printf("  Informe o operador\n\n + Soma\n - Subtração\n * Multiplicação\n / Divisão\n\n");
	fflush(stdin);
	printf("  Operador: ");
	scanf("%c",&op);
	printf("\n");
		if(op=='+'){
		for(c=1; c<=10; c++){
		printf("  %d + %d = %d\n",n,c,n+c);
		}
	}else{
		if(op=='-'){
			for(c=1; c<=10; c++){
			printf("  %d - %d = %d\n",n,c,n-c);
			}
		}else{
			if(op=='*'){
				for(c=1; c<=10; c++){
				printf("  %d * %d = %d\n",n,c,n*c);
				}
			}else{
				if(op=='/'){
					for(c=1; c<=10; c++){
					printf("  %d / %d = %d\n",n,c,n/c);
					}
				}
			}
		}
	}
	system("Pause");
	return 0;
}

/* Aluno: Daniel Oliveira de Souza;
   Faculdade: FUCAPI;
*/
