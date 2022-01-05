#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//9 – Leia uma variável e apresentar sua metade.

int main()
{
	setlocale(LC_ALL, "portuguese");
	float num1;
	printf("Informe um número: \n");
	scanf("%f",&num1);
	printf("O número informado foi %.2f e sua metade é: %.2f\n",num1,num1/2);
	system("Pause");
	return 0;
}

