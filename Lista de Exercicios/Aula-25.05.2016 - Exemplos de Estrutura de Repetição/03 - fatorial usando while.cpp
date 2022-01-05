#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "portuguese");
	int contador, n;
	long int fatorial=1;
	contador=1;
	printf("Programa FATORIAL: \n");
	printf("Informe um número: \n");
	scanf("%d",&n);
	while(contador<=n){
		fatorial=fatorial*contador; // fatorial*=contador;
		contador=contador+1; //  contador++
	}
	printf("O Fatorial de %d equivale a: %d\n",n,fatorial);
	system("Pause");
	return 0;
}
