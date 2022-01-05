#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>


//Função strupr(); converte uma string para maiuscúscula;
//strupr(string);
//strupr - trasforma toda string em maiuscula; strcpy(str, strupr(str)); 


int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	char string[20];
	printf("Entre com string: \n");
	scanf("%s",&string);
	printf("Convertendo: %s\n",strupr(string));	//strupr - trasforma toda string em maiuscula
	system("Pause");
	return 0;
}

