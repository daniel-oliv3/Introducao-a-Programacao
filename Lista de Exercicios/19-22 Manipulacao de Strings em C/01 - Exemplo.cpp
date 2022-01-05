#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//cadeia de caracteres,

int main()
{
	setlocale(LC_ALL, "portuguese");
	char re[8]="lagarto"; // tamanho maximo de caracter
	printf("%s\n", re);
	system("Pause");
	return 0;
}

