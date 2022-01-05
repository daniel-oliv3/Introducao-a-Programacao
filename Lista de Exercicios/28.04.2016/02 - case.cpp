#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// 02 Criar um algoritmo que informe a quantidade de calorias de uma refeição a partir da escolha do usuario que deverar informar o prato, a sobremesa e a bebida.


int main()
{
	setlocale(LC_ALL, "portuguese");
	int calorias=0, i;
	printf("== Cardapio do Dia! ==\n");
	printf("Informe o prato [1 a 4]: \n");
	printf("[1] Vegetariano [180 cal]\n");	
	printf("[2] Peixe [230 cal]\n");
	printf("[3] Frango [250 cal]\n");
	printf("[4] Carne [350 cal]\n");
	scanf("%d",&i);
	switch(i){
		case 1:
			calorias=180;
			break;
		case 2:
			calorias=230;
			break;
		case 3:
			calorias=250;
			break;
		case 4:
			calorias=350;
			break;		
	}
	printf("Informe o sobremesa [1 a 4]: \n");
	printf("[1] Abacaxi [75 cal]\n");	
	printf("[2] Sorvete diet [110 cal]\n");
	printf("[3] Mousse diet [170 cal]\n");
	printf("[4] Mousse chocolate [200 cal]\n");
	scanf("%d",&i);
	switch(i){
		case 1:
			calorias+=75;
			break;
		case 2:
			calorias+=110;
			break;
		case 3:
			calorias+=170;
			break;
		case 4:
			calorias+=200;
			break;		
	}
	printf("Informe a Bebida [1 a 4]: \n");
	printf("[1] Chá [20 cal]\n");	
	printf("[2] Suco de laranja [70 cal]\n");
	printf("[3] Suco de melão [100 cal]\n");
	printf("[4] Refrigerante diet [65 cal]\n");
	scanf("%d",&i);
	switch(i){
		case 1:
			calorias+=20;
			break;
		case 2:
			calorias+=70;
			break;
		case 3:
			calorias+=100;
			break;
		case 4:
			calorias+=65;
			break;		
	}
	printf("Total de calorias: %d\n",calorias);

	system("Pause");
	return 0;
}

