#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//P3 – Escreva um algoritmo que imprima os 10
//primeiros números maiores que 100;

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int c, numero, cont=1;
	printf("\n\n");
	for(c=1; cont<=10; c++){
		printf("  Digite um número: ");
		scanf("%d",&numero);
		if(numero>100){
			cont=cont+1;
			printf("  Maior que cem: %d\n\n",numero);
		}
	}	
	system("Pause");
	return 0;
}

