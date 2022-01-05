#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* P13 – Faça um algoritmo para ler X e Y, calcule
e imprima a soma dos valores entre eles:;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int x, y, soma;
	printf("  Digite o valor de X: ");
	scanf("%d",&x);
	printf("  Digite o valor de Y: ");
	scanf("%d",&y);
	soma=x+y;
	printf("  A soma dos valores é: %d\n",soma);
	system("Pause");
	return 0;
}

/**/
