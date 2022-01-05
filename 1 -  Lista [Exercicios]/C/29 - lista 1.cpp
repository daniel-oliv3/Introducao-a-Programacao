#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// 29. Faça um algoritmo que receba o número de lados de um polígono convexo, calcule e mostre o número de
//diagonais desse polígono. Sabe-se que ND = N * (N - 3)/2, em que N é o número de lados do polígono:



int main()
{
	setlocale(LC_ALL, "portuguese");
	
	int N, ND;
	
	printf("Informe o número de lados de um poligano convexo: ");
	scanf("%d",&N);
	ND = N*(N-3)/2;
	printf("O número de diagonais é: %d\n",ND);
	system("pause");
	return 0;
}
