#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

//2 – Faça um algoritmo que leia um nome e escreva se for
//igual a “Maria”. Veja as várias formas de escrever este
//nome:

int main()
{
	setlocale(LC_ALL, "portuguese");
	char nome[20];
	printf("Informe um nome: \n");
	scanf("%s", &nome);

	if(strcmp(nome, "maria")==0)
	{
		printf("Parabéns Você Acertou!\n");
	}
		
	if(strcmp(nome, "MARIA")==0)      
	{
		printf("Parabéns Você Acertou!\n");
	}
	
	printf("Nome Incorreto!\n");
	system("Pause");
	return 0;
}

