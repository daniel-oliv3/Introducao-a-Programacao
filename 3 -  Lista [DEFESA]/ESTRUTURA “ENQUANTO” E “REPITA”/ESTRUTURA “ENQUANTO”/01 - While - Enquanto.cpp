#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 3ª. LISTA DE EXERCÍCIOS - INTRODUÇÃO À PROGRAMAÇÃO
Prof. Sérgio Roberto Costa Vieira – Estrutura de Repetição*/

// ESTRUTURA “ENQUANTO”

/* 1. Faça um algoritmo que leia vários números e informar quantos números entre 50 e 400 foram informados. Quando o
valor 0 (zero) for lido, o algoritmo deverá cessar sua execução:
*/ 

int main()
{
	setlocale(LC_ALL, "portuguese");
	int r, a=0, num;
	do{
	system("color 1F");	
	system("cls");	
	printf("...................................................\n");
	printf(" Programa que ler vários números e informa quantos \n");
	printf(" números entre 50 e 400 foram digitados.\n");
	printf("...................................................\n\n");
	printf("  Digite um número ou 0 para sair: ");
	scanf("%d",&num);
	while(num != 0){
		if(num>=50 && num<=400){
			a++; 
		}
		printf("  Digite um número ou 0 para sair: ");
		scanf("%d",&num);
	}
	printf("\n     O total de números entre 50 e 400 é: %d\n",a);
	do{
		printf("\n1- Nova Execução\n");  
		printf("2- Sair\n"); 
		scanf("%d",&r); 
		if(r!=1 && r!=2) 
			printf("  <Número Inválido!>\n\a"); 
	}while(r!=1 && r!=2);
	system("cls");	
	}while(r!=2);
	system("Pause");
	return 0;
}

/* Aluno: Daniel Oliveira de Souza;
Faculdade: FUCAPI;*/

