#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// 2 � Fa�a um algoritmo que leia um sal�rio de um funcion�rio, se
//este for menor que R$ 700.00, calcule e mostre o percentual de
//8% referente ao sal�rio fam�lia :

int main()
{
	setlocale(LC_ALL, "portuguese");
	float sal, salF;
	printf("Informe o sal�rio: \n");
	scanf("%f",&sal);
	//salF = (sal*0.08)/100;
	if(sal < 700)
	{	salF = (sal+(sal*(0.08/100)));
		printf("O percentual de 8%% referente ao sal�rio fam�lia �: %.2f\n",salF);
	}	
	else
		printf("Seu sal�rio e maior que 700.00 reais\n");
	
	system("Pause");
	return 0;
}

