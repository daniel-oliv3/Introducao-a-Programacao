#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

//2 � Fa�a um algoritmo que leia um nome e escreva se for
//igual a �Maria�. Veja as v�rias formas de escrever este
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
			printf("Parab�ns Voc� Acertou!\n");
	}
		
	if(strcmp(nome, "MARIA")      
	{
		printf("Parab�ns Voc� Acertou!\n");
	}
	else(nome !=0);
		printf("Voc� Errou!\n");
	system("Pause");
	return 0;
}

