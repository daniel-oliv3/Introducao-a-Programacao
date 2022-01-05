#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// 2 – Faça um algoritmo que leia a quantidade de horas
//trabalhadas no mês de um funcionário, se for maior que 180
//calcular e verificar quantas horas extras ele fez e informar
//quanto receberá no final do mês de horas extras e seu
//salário, a hora dele custa R$ 14,20:

int main()
{
	setlocale(LC_ALL, "portuguese");
	int qht;
	float h;
	printf("Informe a quantidade de horas trabalhadas no mês: \n");
	scanf("%d",&qht);
	if(qht > 180)
	{
		printf("Informe o seu salário: \n");
		scanf("%f",&sal);
		
		
	}	
	
	
	system("Pause");
	return 0;
}

