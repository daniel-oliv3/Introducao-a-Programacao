#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>


// Função strrev(); Inverte uma string dada;
// strrev(string);
// strrev - inverte a string de tras para frente.

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	char string[20];
	printf("Entre com string: \n");
	scanf("%s",&string);
	printf("Invertendo: %s\n",strrev(string));	
	system("Pause");
	return 0;
}

