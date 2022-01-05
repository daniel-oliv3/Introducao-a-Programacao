#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


/* 3ª. LISTA DE EXERCÍCIOS - INTRODUÇÃO À PROGRAMAÇÃO
Prof. Sérgio Roberto Costa Vieira – Estrutura de Repetição*/

// ESTRUTURA “ENQUANTO”

/* 4. Chico tem 1,50m e cresce 2 centímetros por ano, enquanto Juca tem 1,10m e cresce 3 centímetros por ano.
Construir um algoritmo que calcule e imprima quantos anos serão necessários para que Juca seja maior que Chico::*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	int anos;
	float chico, juca;
	system("color 1F");
	printf("..............................................................................................................\n");
	printf("4. Chico tem 1,50m e cresce 2 centímetros por ano, enquanto Juca tem 1,10m e cresce 3 centímetros por ano.\n");
	printf("Construir um algoritmo que calcule e imprima quantos anos serão necessários para que Juca seja maior que Chico:\n");
	printf("..............................................................................................................\n\n");
	chico=1.5;
	juca=1.1;
	anos=0;
	while(juca<=chico){
		chico=chico+0.02; //2 centimetros
		juca=juca+0.03; 
		anos++;
	}
	printf("  Serão necessários %d Anos para que Juca seja maior que Chico\n",anos);
	system("Pause");
	return 0;
}

/* Aluno: Daniel Oliveira de Souza;
Faculdade: FUCAPI;*/

