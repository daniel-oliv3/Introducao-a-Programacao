#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// exemplo 4,
// Algoritmo que l� um n�mero inteiro e escreva "N�mero valido" se este for um n�mero que estiver entre 10 e 30.

int main()
{
	setlocale(LC_ALL, "portuguese");
	int a;
	printf("Entre com 1a n�mero: \n");
	scanf("%d",&a);
	if(a>=10 && a<=30){
		printf("N�mero V�lido!\n");
	}
	system("Pause");
	return 0;
}

