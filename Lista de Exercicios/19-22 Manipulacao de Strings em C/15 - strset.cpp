#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

//Substitui todos os caracteres da string pelo mesmo caractere usado na função strset();
// strset(string, char);
//strset - altera todas as string por simbolos "*****"

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	char string[20];
	printf("Entre com string: \n");
	scanf("%s",&string);
	printf("Substituindo: %s\n",strset(string, '*'));	
	system("Pause");
	return 0;
}

