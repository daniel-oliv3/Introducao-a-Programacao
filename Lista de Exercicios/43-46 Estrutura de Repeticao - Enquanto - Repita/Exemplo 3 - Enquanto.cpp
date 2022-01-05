#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* Escreva um algoritmo que leia os números
informados e imprimir o triplo de cada número. O
algoritmo acaba quando entrar com o número 999:;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int quant, num;
	num=9;
	printf("  Informe um número ou 999 para terminar: ");
	scanf("%d",&num);
	while(num != 999){
		printf("  O triplo é: %d\n",num*3);
		printf("  informe um número ou 999 para terminar: ");
		scanf("%d",&num);
	}
	system("Pause");
	return 0;
}

/**/
