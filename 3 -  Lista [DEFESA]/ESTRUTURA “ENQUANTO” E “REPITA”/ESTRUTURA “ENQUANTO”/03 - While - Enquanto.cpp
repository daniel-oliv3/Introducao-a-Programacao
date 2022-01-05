#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

/* 3ª. LISTA DE EXERCÍCIOS - INTRODUÇÃO À PROGRAMAÇÃO
Prof. Sérgio Roberto Costa Vieira – Estrutura de Repetição*/

// ESTRUTURA “ENQUANTO”

/* 3. Faça um algoritmo que leia números inteiros e imprimir o quadrado de cada número até entrar um número múltiplo
de 5 que deverá ter seu quadrado também impresso:*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1F");
	int numero, resultado;
	printf("...........................................................\n");
	printf(" Programa que ler varios números e imprime o seu quadrado:\n");
	printf(" o número 5 ira imprimir o resultado e sair\n");
	printf("...........................................................\n\n");
 	while(numero%5!=0){	
	printf("\n  Digite um número: ");
 	scanf("%d",&numero);
  	resultado=pow(numero,2);
 	printf("\n    O quadrado do número é: %d\n",resultado);
	 }
	system("Pause");
	return 0;
}

/* Aluno: Daniel Oliveira de Souza;
Faculdade: FUCAPI;*/
