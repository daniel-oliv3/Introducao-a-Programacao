#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// 6 � Fa�a um algoritmo que leia duas vari�veis A e B. A seguir, calcule o
//produto entre elas e atribua � vari�vel PROD. A seguir mostre o
//resultado da vari�vel PROD:

int main()
{
	setlocale(LC_ALL, "portuguese");
	int A, B, PROD;
	printf("Informe o primeiro n�mero: \n");
	scanf("%d",&A);
	printf("Informe o segundo n�mero: \n");
	scanf("%d",&B);
	PROD = A*B;
	printf("O resultado da variavel PROD �: %d\n",PROD);
	system("Pause");
	return 0;
}

