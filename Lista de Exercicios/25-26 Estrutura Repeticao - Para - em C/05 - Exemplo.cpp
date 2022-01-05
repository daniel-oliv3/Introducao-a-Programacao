#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

//Programa que ler os limites inferior e superior de um intervalo e imprimir todos os numeros do intervalo fechado.

int main()
{
	setlocale(LC_ALL, "portuguese");
	int ini, fim, x;
	printf("Informe o limite inicial: \n");
	scanf("%d", &ini);
	printf("Informe o limite final: \n");
	scanf("%d", &fim);
	for(x=ini; x<=fim; x++){
		printf("%d\n",x);
	}
	system("Pause");
	return 0;
}

