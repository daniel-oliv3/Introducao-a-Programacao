#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

/*  INTRODU��O � PROGRAMA��O
Prof. S�rgio Roberto Costa Vieira - Estrutura de Repeti��o Aninhada
ESTRUTURAS DE REPETI��O;
*/

/* 2. Fa�a um programa que mostre a tabuada de um n�mero qualquer, a partir do operador informado pelo usu�rio, os
operadores v�lidos s�o ( � + �, � � �, � * �, � / �):;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int  n, c;
	char op;
	printf("  Digite um n�mero: ");
	scanf("%d",&n);
	printf("  Informe o operador\n\n + Soma\n - Subtra��o\n * Multiplica��o\n / Divis�o\n\n");
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
