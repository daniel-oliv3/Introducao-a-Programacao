#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 3ª. LISTA DE EXERCÍCIOS - INTRODUÇÃO À PROGRAMAÇÃO
Prof. Sérgio Roberto Costa Vieira – Estrutura de Repetição*/

// ESTRUTURA “ENQUANTO”

/* 5. Faça um algoritmo que leia a idade de várias pessoas enquanto o usuário desejar e imprimir:
- total de pessoas com menos de 21 anos;
- total de pessoas com mais de 50 anos;
- total de pessoal com mais de 21 anos e menos de 50 anos;:*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	int idade, cont, cont1=0, cont2=0, cont3=0;
	system("color 1F");	
	printf(".............................................................\n");	
	printf(" Programa que ler a idade de várias pessoas e imprime:\n");
	printf("  - Total de pessoas com menos de 21 anos;\n");
	printf("  - Total de pessoas com mais de 50 anos;\n");
	printf("  - Total de pessoal com mais de 21 anos e menos de 50 anos;\n");
	printf(".............................................................\n\n");
	while(cont!=2){
		printf("\n  Digite a sua idade: ");
		scanf("%d",&idade);
		printf("  Deseja Continuar ?  1 - Sim  2 - Não: ");
		scanf("%d",&cont);
		if(idade<21){
			cont1++;
		}else{
			if(idade>50){
				cont2++;
			}else{
				if(idade>21 || idade<50){
					cont3++;
					}
				}
			}
	}
	printf("\n\n\n\n  - Total de pessoas com menos de 21 anos: %d\n",cont1);
	printf("  - Total de pessoas com mais de 50 anos: %d\n",cont2);
	printf("  - Total de pessoal com mais de 21 anos e menos de 50 anos: %d\n\n",cont3);
	system("Pause");
	return 0;
}

/* Aluno: Daniel Oliveira de Souza;
Faculdade: FUCAPI;*/

