#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// 2 – Faça um algoritmo que leia um salário de um funcionário, se
//este for menor que R$ 700.00, calcule e mostre o percentual de
//8% referente ao salário família :

int main()
{
	setlocale(LC_ALL, "portuguese");
	float sal, salF;
	printf("Informe o salário: \n");
	scanf("%f",&sal);
	//salF = (sal*0.08)/100;
	if(sal < 700)
	{	salF = (sal+(sal*(0.08/100)));
		printf("O percentual de 8%% referente ao salário família é: %.2f\n",salF);
	}	
	else
		printf("Seu salário e maior que 700.00 reais\n");
	
	system("Pause");
	return 0;
}

