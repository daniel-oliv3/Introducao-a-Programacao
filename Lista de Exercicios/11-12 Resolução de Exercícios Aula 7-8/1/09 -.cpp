#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// 9 – Escreva um algoritmo que leia dois valores A e B, para calcular: C =
//( A + B ) * B. No final apresente o resultado.

int main()
{
	setlocale(LC_ALL, "portuguese");
	int A, B, C, r;
	printf("Informe o primeiro valor: \n");
	scanf("%d",&A);	
	printf("Informe o segundo valor: \n");
	scanf("%d",&B);
	C = (A + B)*B;
	printf("O Resultado é: %d\n",C);
	system("Pause");
	return 0;
}

