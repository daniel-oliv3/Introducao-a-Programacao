#include<stdio.h>
#include<stdlib.h>
#include<math.h> //armazena funções matematicas = sqrt, pow
#include<locale.h>

//20. Faça um algoritmo que leia dois números inteiros, calcule e mostre um número elevado ao outro e viceversa:



int main()
{
	setlocale(LC_ALL, "portuguese");
	
	int num1, num2, elev1, elev2;
	
	printf("Informe o primeiro número: ");
	scanf("%d",&num1);
	printf("Informe o segundo número: ");
	scanf("%d",&num2);
	elev1 = pow(num1, num2);
	elev2 = pow(num2, num1);
	printf("O resultado do primeiro número elevado ao segundo número é: %d\n",elev1);
	printf("O resultado do segundo número elevado ao primeiro número é: %d\n",elev2);
	
	
	system("pause");
	return 0;
}
