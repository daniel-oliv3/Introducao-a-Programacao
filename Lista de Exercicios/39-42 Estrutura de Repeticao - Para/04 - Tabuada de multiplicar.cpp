#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//P4 – Faça um algoritmo que apresente a
//tabuada de multiplicar de um número
//qualquer:

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int c, r, numero;
	do{
	system("color 1F");	
	system("cls");	
	printf("........................\n");
	printf(" tabuada de multiplicar\n");
	printf("........................\n");
	printf("\n  Digite um número: ");
	scanf("%d",&numero);
	printf("\n");
	for(c=1; c<=10; c++){
		printf("    %d x %d = %d\n",numero,c,numero*c);
	}	
	printf("    ............\n\n");
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

