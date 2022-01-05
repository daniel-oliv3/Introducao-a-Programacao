#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// 8 – Faça um algoritmo para ler uma variável e apresentar seu Triplo.

int main()
{
	setlocale(LC_ALL, "portuguese");
	int num1, r;
	printf("Informe um valor: \n");
	scanf("%d",&num1);
	r = num1*3;
	printf("O triplo de %d é: %d\n",num1,r);
	system("Pause");
	return 0;
}

