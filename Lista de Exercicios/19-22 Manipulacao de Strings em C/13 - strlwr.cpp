#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

//Fun??o strlwr(); Converte uma string para min?scula;
//strlwr(string);
//strlwr - trasforma toda string em minuscula; strcpy(str, strlwr(str)); 


int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	char string[20];
	printf("Entre com string: \n");
	scanf("%s",&string);
	printf("Convertendo: %s\n",strlwr(string));	
	system("Pause");
	return 0;
}

