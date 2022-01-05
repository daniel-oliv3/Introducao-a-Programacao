#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

//3. Faça um algoritmo que possa imprimir os múltiplos de 5, no intervalo de 1 até 500:

int main()
{
	setlocale(LC_ALL, "portuguese");
	int i, r;
	do{
	system("color 1F");	
	system("cls");	
	printf("..................................................................\n");
	printf(" Programa que imprime os múltiplos de 5, no intervalo de 1 até 500\n");
	printf("..................................................................\n\n");
	for(i=5; i<=500; i=i+5){
		printf("  Múltiplos de 5: = %d\n",i);
	}
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

