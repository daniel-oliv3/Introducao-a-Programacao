#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

//9. Escrever um algoritmo que l� um valor N inteiro e positivo e que calcula e escreve o valor de E.
//E = 1 + 1 / 1! + 1 / 2! + 1 / 3! + 1 / N!

int main()
{
	setlocale(LC_ALL, "portuguese");
	int n, x, y, r;
    float e=1.0, fat=1;
    do{
	system("color 1F");	
	system("cls");	
	printf("............................................................\n");
	printf(" Programa que l� um n�mero e calcula e imprime o valor de E\n   E = 1 + 1 / 1! + 1 / 2! + 1 / 3! + 1 / N!\n");
	printf("............................................................\n\n\n");
	printf("  Digite um n�mero: ");
	scanf("%d", &n);
	for( x =1; x<= n ; x++){
	fat*=x;
	e = e + (1.0/ fat);
	}
	printf("\n\n  O valor de 'E' e : %f\n", e);
	printf("  ............................\n\n");
	do{
		printf("\n1- Nova Execu��o\n");  
		printf("2- Sair\n"); 
		scanf("%d",&r); 
		if(r!=1 && r!=2) 
			printf("  <N�mero Inv�lido!>\n\a"); 
	}while(r!=1 && r!=2);
	system("cls");	
	}while(r!=2);
	system("Pause");
	return 0;
	}

