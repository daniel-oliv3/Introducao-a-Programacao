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
	int retorno;
	printf("Informe um nome: \n");
	//scanf("%s", &nome);
	gets(nome);
	if(strcmp(nome, "maria")
	{
			printf("Parabéns Você Acertou!\n");
	}
		
	if(strcmp(nome, "MARIA")      
	{
		printf("Parabéns Você Acertou!\n");
	}
	else(nome !=0);
		printf("Você Errou!\n");
	system("Pause");
	return 0;
}

