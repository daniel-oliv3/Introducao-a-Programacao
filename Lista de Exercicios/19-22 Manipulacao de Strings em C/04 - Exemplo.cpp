#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//string

int main()
{
	setlocale(LC_ALL, "portuguese");
	char string[100]; // tamanho máximo da string 99 caracteres
	printf("Digite uma string: \n");
	gets(string);
	printf("Você digitou %s\n",string);
	system("Pause");
	return 0;
}

