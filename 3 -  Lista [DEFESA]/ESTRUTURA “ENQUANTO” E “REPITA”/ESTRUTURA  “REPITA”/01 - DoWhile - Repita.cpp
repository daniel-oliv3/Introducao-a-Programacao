#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

// 1. Faça um algoritmo que leia vários números e informar quantos números entre 50 e 400 foram informados. Quando o
//valor 0 (zero) for lido, o algoritmo deverá cessar sua execução:
// while - enquanto
// do_while - repita

int main()
{
	setlocale(LC_ALL, "portuguese");
	int a=0, num, r;
	do{
	system("color 1F");	
	system("cls");	
	printf("...................................................\n");
	printf(" Programa que ler vários números e informa quantos \n");
	printf(" números entre 50 e 400 foram digitados.\n");
	printf("...................................................\n\n");
	printf("  Digite um número ou 0 para sair: ");
	scanf("%d",&num);
	do{
		if(num>=50 && num<=400){
			a++; 
		}
		printf("  Digite um número ou 0 para sair: ");
		scanf("%d",&num);
	}while(num != 0);
	printf("    O total de números entre 50 e 400 é: %d\n",a);
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

