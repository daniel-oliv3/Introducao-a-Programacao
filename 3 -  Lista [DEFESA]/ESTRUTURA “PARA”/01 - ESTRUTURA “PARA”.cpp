#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//01 - Fa�a um algoritmo que leia 50 n�meros e mostre o menor dos n�meros informados:

int main()
{
	setlocale(LC_ALL, "portuguese");
	int num, r, n=1, menor;
	do{
	n=1;	
	system("color 1F");	
	system("cls");	
	printf("...........................................................\n");
	printf(" Programa que ler 50 n�meros e imprime o menor dos n�meros\n");
	printf("...........................................................\n\n");
	printf("  Digite o %d� n�mero: ",n);
	scanf("%d",&num);
	menor=num;
	for(n=1; n<=49; n++){
		printf("  Digite o %d� n�mero: ",n+1);
		scanf("%d",&num);
		if(num<menor){
			menor=num;
		}
	}
	printf("........................\n\n");
	printf("\n    Menor n�mero: %d\n",menor);
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

