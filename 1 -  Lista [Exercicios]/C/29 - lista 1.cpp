#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// 29. Fa�a um algoritmo que receba o n�mero de lados de um pol�gono convexo, calcule e mostre o n�mero de
//diagonais desse pol�gono. Sabe-se que ND = N * (N - 3)/2, em que N � o n�mero de lados do pol�gono:



int main()
{
	setlocale(LC_ALL, "portuguese");
	
	int N, ND;
	
	printf("Informe o n�mero de lados de um poligano convexo: ");
	scanf("%d",&N);
	ND = N*(N-3)/2;
	printf("O n�mero de diagonais �: %d\n",ND);
	system("pause");
	return 0;
}
