#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//03- FA�A UM ALGORITMO QUE LEIA UMA VELOCIDADE EM KM/H E APRESENTE CONVERTIDA EM M/S. A FORMULA DE  CONVERS�O E � "M=K/3.6" SENDO K A VELOCIDADE EM KM/H E M "M/S;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	system("color 1f");
	float M, K;
	printf("\n  Digite a Velocidade em KM/H: ");
	scanf("%f",&K);
	M = K /3.6; // converte km/h em m/s
	printf("  %.f KM/H Equivale � %f M/S\n",K,M);
	system("pause");
	return 0;
	
}
