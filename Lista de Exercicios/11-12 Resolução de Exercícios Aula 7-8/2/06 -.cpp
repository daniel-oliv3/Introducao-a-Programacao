#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// 6 � Fa�a um algoritmo que receba o sal�rio de um funcion�rio,
//calcule um acr�scimo de 40 reais e mostre o novo sal�rio.

int main()
{
	setlocale(LC_ALL, "portuguese");
	float sal;
	printf("Informe o seu sal�rio: \n");
	scanf("%f",&sal);
	printf("O total do sal�rio com acr�scimo de 40 reais �: %f\n",sal+40);	
	system("Pause");
	return 0;
}

