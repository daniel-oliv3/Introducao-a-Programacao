#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

//programa que calcula o fatorial de um numero;

int main()
{
	setlocale(LC_ALL, "portuguese");
	int contador, n;
	long int fatorial=1; // o maximo da capacidade dele
	printf("programa fatorial\n");
	printf("Informe um número: \n");
	scanf("%d",&n);
	for(contador=1; contador<=n; contador++){
		fatorial*=contador; //fatorial vai receber o proprio fatorial vezes contador
	}
	printf("O fatorial de %d equivale a: %d\n",n,fatorial);
	system("Pause");
	return 0;
}

