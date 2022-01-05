#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 3ª. LISTA DE EXERCÍCIOS - INTRODUÇÃO À PROGRAMAÇÃO
Prof. Sérgio Roberto Costa Vieira – Estrutura de Repetição*/

// ESTRUTURA “ENQUANTO”

/* 8. Criar um algoritmo que leia vários números inteiros positivos e identificar o maior, o menor e média de todos os
números informados. O número 0 (zero) encerra o algoritmo::*/


int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int a=0;
	float numero, maior, menor, soma=0;
	printf("............................................\n");
	printf(" Programa que ler vários números e imprime:\n - Maior número;\n - Menor número;\n - Média dos números digitados;\n - O número 0 (zero) encerra o programa;\n");
	printf("............................................\n\n");
	printf("\n  Digite um número: ");
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
			printf("\n  Digite um número: ");
			scanf("%f",&numero);
		}
		//system("cls");
	}
	printf("\n\n  Maior: %.2f\n",maior);
	printf("  Menor: %.2f\n",menor);
	printf("  média: %.2f\n\n",soma/a);
	system("Pause");
	return 0;
}

/* Aluno: Daniel Oliveira de Souza;
Faculdade: FUCAPI;*/

