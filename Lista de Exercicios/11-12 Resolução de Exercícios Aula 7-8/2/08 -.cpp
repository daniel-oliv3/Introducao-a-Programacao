#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// 8 � Fa�a um algoritmo para ler uma vari�vel e apresentar seu Triplo.

int main()
{
	setlocale(LC_ALL, "portuguese");
	int num1, r;
	printf("Informe um valor: \n");
	scanf("%d",&num1);
	r = num1*3;
	printf("O triplo de %d �: %d\n",num1,r);
	system("Pause");
	return 0;
}

