#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

/* 3�. LISTA DE EXERC�CIOS - INTRODU��O � PROGRAMA��O
Prof. S�rgio Roberto Costa Vieira � Estrutura de Repeti��o*/

// ESTRUTURA �ENQUANTO�

/* 3. Fa�a um algoritmo que leia n�meros inteiros e imprimir o quadrado de cada n�mero at� entrar um n�mero m�ltiplo
de 5 que dever� ter seu quadrado tamb�m impresso:*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1F");
	int numero, resultado;
	printf("...........................................................\n");
	printf(" Programa que ler varios n�meros e imprime o seu quadrado:\n");
	printf(" o n�mero 5 ira imprimir o resultado e sair\n");
	printf("...........................................................\n\n");
 	while(numero%5!=0){	
	printf("\n  Digite um n�mero: ");
 	scanf("%d",&numero);
  	resultado=pow(numero,2);
 	printf("\n    O quadrado do n�mero �: %d\n",resultado);
	 }
	system("Pause");
	return 0;
}

/* Aluno: Daniel Oliveira de Souza;
Faculdade: FUCAPI;*/
