#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

int main()
{
	setlocale(LC_ALL, "portuguese");
	int contador=1, n;
	long int fatorial=1;
	printf("Programa FATORIAL\n");
	printf("Informe um número: \n");
	scanf("%d",&n);
	do{
		fatorial=fatorial*contador;
		contador++;
	}while(contador<=n);
	printf("O Fatorial de %d equivale a: %d\n",n,fatorial);
	system("Pause");
	return 0;
}

