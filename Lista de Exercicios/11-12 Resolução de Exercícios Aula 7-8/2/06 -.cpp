#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// 6 – Faça um algoritmo que receba o salário de um funcionário,
//calcule um acréscimo de 40 reais e mostre o novo salário.

int main()
{
	setlocale(LC_ALL, "portuguese");
	float sal;
	printf("Informe o seu salário: \n");
	scanf("%f",&sal);
	printf("O total do salário com acréscimo de 40 reais é: %f\n",sal+40);	
	system("Pause");
	return 0;
}

