#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// 13 � Leia o sal�rio de um funcion�rio, calcule e mostre o novo
//sal�rio, sabendo-se que este sofreu aumento de 25%.

int main()
{
	setlocale(LC_ALL, "portuguese");
	float sal, au;
	printf("Informe o seu sal�rio: \n");
	scanf("%f",&sal);
	au = (sal*0.25)+sal; //apenas (salario*0.25), seria apenas 25% do sal�rio. por isso soma-se mais o sal�rio.
	printf("Seu sal�rio com aumento de 25%% �: %.2f\n",au);	
	system("Pause");
	return 0;
}

