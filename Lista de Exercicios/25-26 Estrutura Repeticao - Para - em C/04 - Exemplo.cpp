#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

//Programa que ler cincos vezes um conjunto de dois valores, calcula e mostra a soma desses valores;

int main()
{
	setlocale(LC_ALL, "portuguese");
	int a, b, r, c;
	for(c=1; c<=5; c++){
		printf("Entre com um valor para A: \n");
		scanf("%d",&a);
		printf("Entre com um valor para B: \n");
		scanf("%d",&b);
		r=a+b;
		printf("O resultado correspondente a: %d\n",r);
	}
	system("Pause");
	return 0;
}

