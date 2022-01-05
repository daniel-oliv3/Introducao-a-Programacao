#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

//Função strcpy();
// Copia a string-origem para a string-destino
//strcpy(string_destino, string_destino);

int main()
{
	setlocale(LC_ALL, "portuguese");
	char str1[100], str2[100], str3[100];
	printf("Entre com uma string: \n");
	gets(str1);
	strcpy(str2, str1); // (destino, origem) // copia a str1 para a str2.
	strcpy(str3, "você digitou a string: "); //atribui o texto entre aspas duplas "..." na str3.
	printf("%s %s \n",str3,str2); // imprime
	system("Pause");
	return 0;
}

