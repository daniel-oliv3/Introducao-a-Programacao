#include<stdio.h>
#include<stdlib.h>
#include<math.h> //armazena fun��es matematicas = sqrt, pow
#include<locale.h>

//20. Fa�a um algoritmo que leia dois n�meros inteiros, calcule e mostre um n�mero elevado ao outro e viceversa:



int main()
{
	setlocale(LC_ALL, "portuguese");
	
	int num1, num2, elev1, elev2;
	
	printf("Informe o primeiro n�mero: ");
	scanf("%d",&num1);
	printf("Informe o segundo n�mero: ");
	scanf("%d",&num2);
	elev1 = pow(num1, num2);
	elev2 = pow(num2, num1);
	printf("O resultado do primeiro n�mero elevado ao segundo n�mero �: %d\n",elev1);
	printf("O resultado do segundo n�mero elevado ao primeiro n�mero �: %d\n",elev2);
	
	
	system("pause");
	return 0;
}
