#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//41. Para vários tributos, a base de cálculo é o salário mínimo. Fazer um algoritmo que leia o valor do salário
//mínimo e o valor do salário de uma pessoa. Calcular e exibir quantos salários mínimos esta pessoa ganha:


int main()
{
	setlocale(LC_ALL, "portuguese");
	float salario, minimo, total;
	
	printf("Informe o valor do salário minimo: \n");
	scanf("%f",&minimo);
	printf("Informe o valor do seu salário: \n");
	scanf("%f",&salario);
	total = salario/minimo;
	printf("Você recebe: %.2f salários minimos.\n",total);
	
	system("pause");
	return 0;
	
	
	
	
}
