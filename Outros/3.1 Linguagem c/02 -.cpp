#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

/*  INTRODU��O � PROGRAMA��O
Prof. S�rgio Roberto Costa Vieira - Estrutura de Repeti��o Aninhada
ESTRUTURAS DE REPETI��O;
*/

/* 3. Fa�a um programa para calcular o valor de A, onde:
A = 1 + 3 + 5 + 7 + 9 + ... + 49
    1   2   3   4   5         25
;*/


int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	float n, s=0, cima=1, baixo=1, c;
	printf("  Digite um n�mero: ");
	scanf("%f",&n);
	for(c=1; c<n; c++){  // para(c recebe 1; c menor que n; c mais mais)fa�a;
		baixo++; // baixo mais mais;
		cima+=2; // cima mais igual a 2;
		s+=(float)cima/baixo;  // s mais igual (float) cima dividido por baixo;
	}
	printf("  O valor de A: %.2f\n",s+1);  // imprimindo resultado;
	system("Pause");
	return 0;
}

/* Aluno: Daniel Oliveira de Souza;
   Faculdade: FUCAPI;
*/
