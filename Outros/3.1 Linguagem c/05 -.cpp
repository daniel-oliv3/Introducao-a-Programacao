#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


/*  INTRODU��O � PROGRAMA��O
Prof. S�rgio Roberto Costa Vieira - Estrutura de Repeti��o Aninhada
ESTRUTURAS DE REPETI��O;
*/

/* 5. A s�rie de FETUCCINE � gerada da seguinte forma: os dois primeiros termos s�o fornecidos pelo usu�rio; a partir
da�, os termos s�o gerados com a soma ou subtra��o dos dois termos anteriores. Criar um algoritmo que imprima os
10 primeiros termos da s�rie de FETUCCINE:
Ai = Ai � 1 + Ai � 2 para os valores que ficar�o na posi��o i, sendo o i de valor �mpar. (i � a posi��o do n�mero)
Ai = Ai � 1 � Ai � 2 para os valores que ficar�o na posi��o i, sendo o i de valor par. (i � a posi��o do n�mero);*/


int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int a1, a2, i, termo;
	printf("  Digitr o 1� termo: ");
	scanf("%d",&a1);
	printf("  Digite o 2� termo: ");
	scanf("%d",&a2);
	printf("\n");
	for(i=3; i<=10; i++){  // para(i recebe 3; i menor igual a 10; i mais mais)fa�a;
		if(i % 2 == 0){  // se(i mod 2 igual igual a 0)fa�a;
			termo=a2-a1;  // termo recebe a2 menos a1;
		}else{  // caso contrario;
			if(i % 2 == 1){  // se(i mod 2 igual igual a 1)fa�a;
				termo=a2+a1;  // termo recebe a2 mais a1;
			}
		}
		printf("   %d\n",termo);  // impress�o do resultado;
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
