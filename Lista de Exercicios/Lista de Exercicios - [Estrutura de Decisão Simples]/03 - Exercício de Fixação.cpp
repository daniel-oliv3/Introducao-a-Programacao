#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//3 – Faça um algoritmo que leia um salário de um
//funcionário, se este for menor que R$ 700.00, calcule e
//mostre o percentual de 8% referente ao salário família :


int main()
{
	setlocale(LC_ALL, "portuguese");
	float salario, r;
	printf("Informe o salário: \n");
	scanf("%f",&salario);
	if(salario < 700.00)
	{
		r = salario*8/100;
		printf("O Percentual de 8%% referente ao salário família é: %.2f\n",r);
	}
	else
	{
		printf("Seu Salário é: %.2f\n",salario);
	}
	
	system("Pause");
	return 0;
}

