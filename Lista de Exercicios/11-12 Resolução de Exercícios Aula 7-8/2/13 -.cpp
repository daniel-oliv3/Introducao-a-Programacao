#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// 13 – Leia o salário de um funcionário, calcule e mostre o novo
//salário, sabendo-se que este sofreu aumento de 25%.

int main()
{
	setlocale(LC_ALL, "portuguese");
	float sal, au;
	printf("Informe o seu salário: \n");
	scanf("%f",&sal);
	au = (sal*0.25)+sal; //apenas (salario*0.25), seria apenas 25% do salário. por isso soma-se mais o salário.
	printf("Seu salário com aumento de 25%% é: %.2f\n",au);	
	system("Pause");
	return 0;
}

