#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

// programa que imprime os valores de 1 a 20 em ordem crescente;

int main()
{
	setlocale(LC_ALL, "portuguese");
	int c;
	for(c=1;c<=20;c++){
		printf("%d\n",c);
	}
	system("Pause");
	return 0;
}

