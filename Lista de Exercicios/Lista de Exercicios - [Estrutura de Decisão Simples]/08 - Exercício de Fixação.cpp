#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//8 - Fa�a um algoritmo que leia o valor de um ve�culo � venda,
//se o comprador for funcion�rio p�blico, aplique um desconto
//de 15% no valor do ve�culo. No final mostre o valor do
//ve�culo e o desconto recebido:

int main(){
	setlocale(LC_ALL, "portuguese");
	float vv, des;
	int t;
	printf("Informe o valor do ve�culo: \n");
	scanf("%f",&vv);
	printf("Digite: [1] funcion�rio p�blico [2] iniciativa privada\n");
	scanf("%d",&t);
	des = vv*0.85;
	if(t == 1)
	{
		printf("O valor do ve�culo com desconto de 15%% �: %.2f\n",des);
	}
	else
		if(t == 2)
			printf("O valor do ve�culo sem desconto �: %.2f\n",vv);
		else 
			printf("N�mero Invalido!\n");

	system("pause");
	return 0;	
}
