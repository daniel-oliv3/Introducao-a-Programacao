#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

//Função strcat();
//A string de origem permanecerá inalterada e sera anexada ao fim da string de destino
//strcat(string_destino, string_origem);
//ele concatena uma string, a string de origem permanecerá inalterada, e sera anexada ao fim da string de destino.

int main()
{
	setlocale(LC_ALL, "portuguese");
	char str1[100], str2[100];
	printf("Entre com uma string: \n");
	gets(str1);
	strcpy(str2,"Você digitou a string "); // copia uma string em outra, variavel str2 recebe "Entre com a string"..copia uma string em outra
	strcat(str2,str1); // vai concatena a string str1 ao final da string str2
	printf("%s\n",str2);
	system("Pause");
	return 0;
}

