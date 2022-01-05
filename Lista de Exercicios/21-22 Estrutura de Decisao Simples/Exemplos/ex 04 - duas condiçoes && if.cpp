#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// exemplo 4,
// Algoritmo que lê um número inteiro e escreva "Número valido" se este for um número que estiver entre 10 e 30.

int main()
{
	setlocale(LC_ALL, "portuguese");
	int a;
	printf("Entre com 1a número: \n");
	scanf("%d",&a);
	if(a>=10 && a<=30){
		printf("Número Válido!\n");
	}
	system("Pause");
	return 0;
}

