#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//9 � Leia uma vari�vel e apresentar sua metade.

int main()
{
	setlocale(LC_ALL, "portuguese");
	float num1;
	printf("Informe um n�mero: \n");
	scanf("%f",&num1);
	printf("O n�mero informado foi %.2f e sua metade �: %.2f\n",num1,num1/2);
	system("Pause");
	return 0;
}

