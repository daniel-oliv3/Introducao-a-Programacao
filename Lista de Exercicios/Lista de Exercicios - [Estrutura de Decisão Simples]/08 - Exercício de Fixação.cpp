#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//8 - Faça um algoritmo que leia o valor de um veículo à venda,
//se o comprador for funcionário público, aplique um desconto
//de 15% no valor do veículo. No final mostre o valor do
//veículo e o desconto recebido:

int main(){
	setlocale(LC_ALL, "portuguese");
	float vv, des;
	int t;
	printf("Informe o valor do veículo: \n");
	scanf("%f",&vv);
	printf("Digite: [1] funcionário público [2] iniciativa privada\n");
	scanf("%d",&t);
	des = vv*0.85;
	if(t == 1)
	{
		printf("O valor do veículo com desconto de 15%% é: %.2f\n",des);
	}
	else
		if(t == 2)
			printf("O valor do veículo sem desconto é: %.2f\n",vv);
		else 
			printf("Número Invalido!\n");

	system("pause");
	return 0;	
}
