#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//3 � Fa�a um algoritmo que leia um sal�rio de um
//funcion�rio, se este for menor que R$ 700.00, calcule e
//mostre o percentual de 8% referente ao sal�rio fam�lia :


int main()
{
	setlocale(LC_ALL, "portuguese");
	float salario, r;
	printf("Informe o sal�rio: \n");
	scanf("%f",&salario);
	if(salario < 700.00)
	{
		r = salario*8/100;
		printf("O Percentual de 8%% referente ao sal�rio fam�lia �: %.2f\n",r);
	}
	else
	{
		printf("Seu Sal�rio �: %.2f\n",salario);
	}
	
	system("Pause");
	return 0;
}

