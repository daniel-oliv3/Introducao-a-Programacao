#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 3�. LISTA DE EXERC�CIOS - INTRODU��O � PROGRAMA��O
Prof. S�rgio Roberto Costa Vieira � Estrutura de Repeti��o*/

// ESTRUTURA �ENQUANTO�

/* 8. Criar um algoritmo que leia v�rios n�meros inteiros positivos e identificar o maior, o menor e m�dia de todos os
n�meros informados. O n�mero 0 (zero) encerra o algoritmo::*/


int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int a=0;
	float numero, maior, menor, soma=0;
	printf("............................................\n");
	printf(" Programa que ler v�rios n�meros e imprime:\n - Maior n�mero;\n - Menor n�mero;\n - M�dia dos n�meros digitados;\n - O n�mero 0 (zero) encerra o programa;\n");
	printf("............................................\n\n");
	printf("\n  Digite um n�mero: ");
	scanf("%f",&numero);
	maior=numero;
	menor=numero;
	//system("cls");
	while(numero!=0){
		a++;
		soma=soma+numero;
		if(numero>maior){
			maior=numero;
		}else{
			if(numero<menor){
				menor=numero;
			}
			printf("\n  Digite um n�mero: ");
			scanf("%f",&numero);
		}
		//system("cls");
	}
	printf("\n\n  Maior: %.2f\n",maior);
	printf("  Menor: %.2f\n",menor);
	printf("  m�dia: %.2f\n\n",soma/a);
	system("Pause");
	return 0;
}

/* Aluno: Daniel Oliveira de Souza;
Faculdade: FUCAPI;*/

