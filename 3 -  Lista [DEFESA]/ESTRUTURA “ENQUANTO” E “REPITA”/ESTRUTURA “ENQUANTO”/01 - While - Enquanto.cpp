#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 3�. LISTA DE EXERC�CIOS - INTRODU��O � PROGRAMA��O
Prof. S�rgio Roberto Costa Vieira � Estrutura de Repeti��o*/

// ESTRUTURA �ENQUANTO�

/* 1. Fa�a um algoritmo que leia v�rios n�meros e informar quantos n�meros entre 50 e 400 foram informados. Quando o
valor 0 (zero) for lido, o algoritmo dever� cessar sua execu��o:
*/ 

int main()
{
	setlocale(LC_ALL, "portuguese");
	int r, a=0, num;
	do{
	system("color 1F");	
	system("cls");	
	printf("...................................................\n");
	printf(" Programa que ler v�rios n�meros e informa quantos \n");
	printf(" n�meros entre 50 e 400 foram digitados.\n");
	printf("...................................................\n\n");
	printf("  Digite um n�mero ou 0 para sair: ");
	scanf("%d",&num);
	while(num != 0){
		if(num>=50 && num<=400){
			a++; 
		}
		printf("  Digite um n�mero ou 0 para sair: ");
		scanf("%d",&num);
	}
	printf("\n     O total de n�meros entre 50 e 400 �: %d\n",a);
	do{
		printf("\n1- Nova Execu��o\n");  
		printf("2- Sair\n"); 
		scanf("%d",&r); 
		if(r!=1 && r!=2) 
			printf("  <N�mero Inv�lido!>\n\a"); 
	}while(r!=1 && r!=2);
	system("cls");	
	}while(r!=2);
	system("Pause");
	return 0;
}

/* Aluno: Daniel Oliveira de Souza;
Faculdade: FUCAPI;*/

