#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// 4 – Faça um algoritmo que leia o valor de um veículo à venda,
//se o comprador for funcionário público, aplique um desconto
//de 15% no valor do veículo. No final mostre o valor do
//veículo e o desconto recebido

int main()
{
	setlocale(LC_ALL, "portuguese");
	float v, sd; 
	int s;
	printf("Informe o valor do veículo: \n");
	scanf("%f",&v);
	printf("Sevidor [1] Privado: - [2] Público:\n");
	scanf("%d",&s);
	if(s == 2)
	{
		sd = v*0.85;
		printf("O novo valor do veículo com desconto de 15%% é: %.2f\n",sd);	
		
	}	
	else
		printf("O valor do veículo sem desconto é: %.2f\n",v);
	
	system("Pause");
	return 0;
}

