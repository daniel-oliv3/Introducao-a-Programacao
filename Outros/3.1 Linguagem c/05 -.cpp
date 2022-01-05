#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


/*  INTRODUÇÃO À PROGRAMAÇÃO
Prof. Sérgio Roberto Costa Vieira - Estrutura de Repetição Aninhada
ESTRUTURAS DE REPETIÇÃO;
*/

/* 5. A série de FETUCCINE é gerada da seguinte forma: os dois primeiros termos são fornecidos pelo usuário; a partir
daí, os termos são gerados com a soma ou subtração dos dois termos anteriores. Criar um algoritmo que imprima os
10 primeiros termos da série de FETUCCINE:
Ai = Ai – 1 + Ai – 2 para os valores que ficarão na posição i, sendo o i de valor ímpar. (i é a posição do número)
Ai = Ai – 1 – Ai – 2 para os valores que ficarão na posição i, sendo o i de valor par. (i é a posição do número);*/


int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int a1, a2, i, termo;
	printf("  Digitr o 1º termo: ");
	scanf("%d",&a1);
	printf("  Digite o 2º termo: ");
	scanf("%d",&a2);
	printf("\n");
	for(i=3; i<=10; i++){  // para(i recebe 3; i menor igual a 10; i mais mais)faça;
		if(i % 2 == 0){  // se(i mod 2 igual igual a 0)faça;
			termo=a2-a1;  // termo recebe a2 menos a1;
		}else{  // caso contrario;
			if(i % 2 == 1){  // se(i mod 2 igual igual a 1)faça;
				termo=a2+a1;  // termo recebe a2 mais a1;
			}
		}
		printf("   %d\n",termo);  // impressão do resultado;
		a1=a2;  // a1 recebe o valor da variavel a2;
		a2=termo;  // a2 recebe o valor davariavel termo;
	}
	printf("\n");
	system("Pause");
	return 0;
}

/* Aluno: Daniel Oliveira de Souza;
   Faculdade: FUCAPI;
*/
