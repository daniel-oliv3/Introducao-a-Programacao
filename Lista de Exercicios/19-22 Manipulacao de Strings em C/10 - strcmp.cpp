#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

//A função strcmp(); compara a string 1 com a string 2;
//Se as duas forem diferenres a função retorna zero;
//Se elas forem diferentes a função retorna:
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
		printf("  As duas string são diferentes. \n");
		else
		printf("  As duas strings são iguais. \n");
	system("Pause");
	return 0;
}

//aula 84 – strcmp (portalcplusplus)
// Essa função compara duas strings segundo sua ordem alfabética e retorna um inteiro.
//Se esse inteiro for negativo, é porque a primeira string é menor que a segunda.
//Se retornar um inteiro positivo, é porque a segunda string é maior que a segunda.
//Se retornar 0, é porque as strings são idênticas.
