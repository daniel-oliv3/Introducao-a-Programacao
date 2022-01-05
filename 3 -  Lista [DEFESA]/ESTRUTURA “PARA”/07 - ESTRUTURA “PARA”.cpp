#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//7. Criar um algoritmo que leia um número inteiro e possa imprimir a tabuada de somar e também a tabuada de subtrair
//do número de 1 até 10:

int main()
{
	setlocale(LC_ALL, "portuguese");
	int num, soma, subtracao, cont, r;
	do{
		system("color 1F");
		system("cls");
		printf("..........................................................................................\n");
		printf(" Programa que ler um número e imprime a tabuada de soma e subtração do número de 1 até 10\n");
		printf("..........................................................................................\n\n");
		printf("  Digite um número: ");
		scanf("%d",&num);
		printf("\n");
		for(cont=1;cont<=10;cont++){
		soma=num+cont;
		printf("    %d + %d = %d\n",num,cont,soma);
	}
		printf("\n");
		for(cont=1;cont<=10;cont++){
		subtracao=num-cont;
		printf("    %d - %d = %d\n",num,cont,subtracao);
	}do{ 
		printf("\n1- Nova tabuada\n");  
		printf("2- Sair\n"); 
		scanf("%d",&r); 
		if(r!=1 && r!=2) 
			printf("Número Invalido!\n\a"); 
	}while(r!=1 && r!=2);   
	system("cls"); 
	}while(r!=2);
	system("Pause");
	return 0;
}

