#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


//5. Construa um algoritmo que leia a quantidade (Q) e o pre�o (PR) de 15 produtos diferentes, comprados por uma
//empresa, e apresente o total gasto por ela:

int main()
{
	setlocale(LC_ALL, "portuguese");
	float q, pr, p, tg, resp; 
	int r, c=0;
	do{
	system("color 1F");	
	system("cls");	
	printf("........................................................\n");
	printf(" Programa que ler a quantidade e o pre�o de 15 produtos\n");
	printf("  - apresenta o total gasto\n");
	printf("........................................................\n\n");
	for(c=1; c<=15; c++){
		printf("  Digite o pre�o do %d� produto: ",c);
		scanf("%f",&p);
		printf("  Digite a quantidade de produtos: ");
		scanf("%f",&q);
		tg=q*p;
		resp=resp+tg;
		printf("    Total gasto na %d� compra � R$: %.2f\n\n",c,tg);
	}
	printf("..................................................\n\n");
	printf("    Total gasto pela empresa � R$: %.2f\n",resp);
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

