#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//01 - Faça um algoritmo que leia 50 números e mostre o menor dos números informados:

int main()
{
	setlocale(LC_ALL, "portuguese");
	int num, r, n=1, menor;
	do{
	n=1;	
	system("color 1F");	
	system("cls");	
	printf("...........................................................\n");
	printf(" Programa que ler 50 números e imprime o menor dos números\n");
	printf("...........................................................\n\n");
	printf("  Digite o %dº número: ",n);
	scanf("%d",&num);
	menor=num;
	for(n=1; n<=49; n++){
		printf("  Digite o %dº número: ",n+1);
		scanf("%d",&num);
		if(num<menor){
			menor=num;
		}
	}
	printf("........................\n\n");
	printf("\n    Menor número: %d\n",menor);
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

