#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

//2. Faça um algoritmo que leia 30 números e mostre quantos números são pares e quantos números são ímpares:

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
		printf(" Programa que ler 30 números e informa a quantidade de números pares e impares\n");
		printf("...............................................................................\n\n");
		for(c=1;c<=30;c++){
			printf("  Digite o %dº número: ",c);
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
		printf("\n1- Nova Execução\n"); 
		printf("2- Sair\n"); 
		scanf("%d",&r); 
		if(r!=1 && r!=2) 
			printf("  <Número Inválido!>\n\a");  
	}while(r!=1 && r!=2);
	system("cls");	
	}while(r!=2);
	system("Pause");
	return 0;
}

