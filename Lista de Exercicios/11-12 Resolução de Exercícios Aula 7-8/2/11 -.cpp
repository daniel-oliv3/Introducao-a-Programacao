#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// 11 – Encontrar e apresentar o valor para Z aplicando a seguinte
//fórmula: Z=(L+A * 2) / C.

int main()
{
	setlocale(LC_ALL, "portuguese");
	float Z, L, A, C;
	printf("Informe o primeiro valor: \n");
	scanf("%f",&L);
	printf("Informe o segundo valor: \n");
	scanf("%f",&A);
	printf("Informe o terceiro valor: \n");
	scanf("%f",&C);
	Z = (L+A * 2)/C;
	printf("O resultado é: %.2f\n",Z);
	system("Pause");
	return 0;
}

