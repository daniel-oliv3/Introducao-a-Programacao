#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// 4 � Fa�a um algoritmo que leia o valor de um ve�culo � venda,
//se o comprador for funcion�rio p�blico, aplique um desconto
//de 15% no valor do ve�culo. No final mostre o valor do
//ve�culo e o desconto recebido

int main()
{
	setlocale(LC_ALL, "portuguese");
	float v, sd; 
	int s;
	printf("Informe o valor do ve�culo: \n");
	scanf("%f",&v);
	printf("Sevidor [1] Privado: - [2] P�blico:\n");
	scanf("%d",&s);
	if(s == 2)
	{
		sd = v*0.85;
		printf("O novo valor do ve�culo com desconto de 15%% �: %.2f\n",sd);	
		
	}	
	else
		printf("O valor do ve�culo sem desconto �: %.2f\n",v);
	
	system("Pause");
	return 0;
}

