#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

//A fun��o strcmp(); compara a string 1 com a string 2;
//Se as duas forem diferenres a fun��o retorna zero;
//Se elas forem diferentes a fun��o retorna:
//1 se a string2 for maior;
//-1 se a string2 for menor;
//strcmp(string1, string2);
//strcmp - compara duas strings, 1=true, 0=false.

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	char str1[100], str2[100];
	printf("  Entre com uma string: \n");
	gets(str1);
	printf("  Entre com outra string: \n");
	gets(str2);
	if(strcmp(str1, str2)) // 
		printf("  As duas string s�o diferentes. \n");
		else
		printf("  As duas strings s�o iguais. \n");
	system("Pause");
	return 0;
}

//aula 84 � strcmp (portalcplusplus)
// Essa fun��o compara duas strings segundo sua ordem alfab�tica e retorna um inteiro.
//Se esse inteiro for negativo, � porque a primeira string � menor que a segunda.
//Se retornar um inteiro positivo, � porque a segunda string � maior que a segunda.
//Se retornar 0, � porque as strings s�o id�nticas.
