#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

// programa que imprime os valores de 1 a 20 em ordem decrescente;

int main()
{
	setlocale(LC_ALL, "portuguese");
	int c;
	for(c=30;c>=1;c--){ //de 30 ate menor ou igual a 1
		printf("%d\n",c);
	}
	system("Pause");
	return 0;
}

