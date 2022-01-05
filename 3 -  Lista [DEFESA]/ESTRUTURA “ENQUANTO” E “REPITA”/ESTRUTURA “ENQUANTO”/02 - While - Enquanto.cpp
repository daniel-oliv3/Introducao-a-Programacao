#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<ctype.h>
#include<locale.h>

/* 3ª. LISTA DE EXERCÍCIOS - INTRODUÇÃO À PROGRAMAÇÃO
Prof. Sérgio Roberto Costa Vieira – Estrutura de Repetição*/

// ESTRUTURA “ENQUANTO”

/* 2. Faça um algoritmo que leia o sexo de várias pessoas e imprimir quantas pessoas são do sexo masculino e são do
sexo feminino. ( considerar “M” ou “m” e também “F” ou “f” )::*/

int main(){
	setlocale(LC_ALL, "portuguese");
	system("color 1F");
	char sexo;
	int cont_m, cont_f, resp;
	cont_m=0, cont_f=0, resp=1;
	printf("......................................................\n");
	printf(" Programa que ler o sexo de várias pessoas e imprime:\n - quantidades do sexo masculino e feminino\n");
	printf("......................................................\n\n");
	while(resp==1){
		  printf("\n  Digite o Sexo: ");
		  fflush(stdin);
		  scanf("%c",&sexo);
		  sexo = toupper(sexo);
		  if(sexo=='M'){
		  	cont_m++;
		  }else if(sexo=='F'){
		  	cont_f++;
		  }else{
		  	printf(" <Número Inválido!>\n\a");
		  }
		printf("\n  Deseja continuar ? 1: SIM ou 2: NÃO ");
		scanf("%d",&resp);
		system("cls");
		while(resp!=1 && resp!=2){
			printf("  <Número Inválido!>\n\a");
			system("cls");
			printf("\n  Deseja continuar ? 1: SIM ou 2: NÃO ");
			scanf("%d",&resp);
			system("cls");					
			}
		  }
	      printf("\n\n A Quantidade do Sexo Masculino = %d\n", cont_m);
		  printf(" A Quantidade do Sexo Feminino = %d\n", cont_f);
	system("pause");
	return(0);
}

/* Aluno: Daniel Oliveira de Souza;
Faculdade: FUCAPI;*/
