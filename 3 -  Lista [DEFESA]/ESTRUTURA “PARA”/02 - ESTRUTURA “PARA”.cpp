#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

//2. Fa�a um algoritmo que leia 30 n�meros e mostre quantos n�meros s�o pares e quantos n�meros s�o �mpares:

int main()
{
	setlocale(LC_ALL, "portuguese");
	int num, r, c, par, impar;
	do{
		par=0;
		impar=0;
		system("color 1F");
		system("cls");
		printf("...............................................................................\n");
		printf(" Programa que ler 30 n�meros e informa a quantidade de n�meros pares e impares\n");
		printf("...............................................................................\n\n");
		for(c=1;c<=30;c++){
			printf("  Digite o %d� n�mero: ",c);
			scanf("%d",&num);
			if((num % 2)==0){ 
			par=par+1;
			}else{
			impar=impar+1;
		}
	}
	printf(".........................\n\n");
	printf("\n  Par: %d\n",par);
	printf("  Impar: %d\n",impar);
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

