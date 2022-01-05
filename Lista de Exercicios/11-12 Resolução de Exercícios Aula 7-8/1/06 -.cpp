#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// 6 – Faça um algoritmo que leia duas variáveis A e B. A seguir, calcule o
//produto entre elas e atribua à variável PROD. A seguir mostre o
//resultado da variável PROD:

int main()
{
	setlocale(LC_ALL, "portuguese");
	int A, B, PROD;
	printf("Informe o primeiro número: \n");
	scanf("%d",&A);
	printf("Informe o segundo número: \n");
	scanf("%d",&B);
	PROD = A*B;
	printf("O resultado da variavel PROD é: %d\n",PROD);
	system("Pause");
	return 0;
}

