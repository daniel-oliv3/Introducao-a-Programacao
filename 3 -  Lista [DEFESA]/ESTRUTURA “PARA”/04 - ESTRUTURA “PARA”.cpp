#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

//4. Criar um algoritmo para entrar com nome, nota da PR1 e nota da PR2 de 15 alunos. Imprimir uma listagem,
//contendo: nome, nota da PR1, nota da PR2 e m�dia arredondada de aluno. Ao final, calcule a m�dia geral da turma:

int main()
{
	setlocale(LC_ALL, "portuguese");
	int r, c;
	char nome[30];
	float pr1, pr2, soma=0, media, media_g;
	do{
	system("color 1F");	
	system("cls");	
	printf("..............................................\n");
	printf(" Programa que ler nome, e a nota de 15 alunos\n");
	printf("..............................................\n\n");
	for(c=1; c<=15; c++){
		fflush(stdin);
		printf(" %d� Aluno\n",c);
		printf("  Digite o seu nome: ");
		gets(nome);
		fflush(stdin);
		printf("   Digite a 1� nota: ");
		scanf("%f",&pr1);
		printf("   Digite a 2� nota: ");
		scanf("%f",&pr2);
		media=(pr1+pr2)/2;
		soma=soma+media;
		printf("\n   Aluno: %s\n   1� Nota: %.2f\n   2� Nota: %.2f\n     M�dia: %.2f\n\n",nome,pr1,pr2,media);
	}
	printf("...................................\n\n");
	printf("\n   M�dia geral da turma: %.2f\n",soma/15);	
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

