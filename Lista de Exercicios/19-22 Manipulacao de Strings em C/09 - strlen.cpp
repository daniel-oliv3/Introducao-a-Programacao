#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

//strlen - vai ler o tamanho da string incluindo os espaços em branco.
//A função strlen(); retorna o comprimento da string fornecida;
//O terminador nulo não e contado
//strlen(string);
//retorna o tamanho da string, "numeros de caracter"

int main()
{
	setlocale(LC_ALL, "portuguese");
	int size;
	char str[100];
	printf("Entre com uma string: ");
	gets(str);
	size=strlen(str); //buscar o tamanho da string, size retorna uma valor INTEIRO.
	printf("A string que você digitou tem tamanho %d\n",size);
	system("Pause");
	return 0;
}

