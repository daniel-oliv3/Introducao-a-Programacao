#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

//3. Fa�a um algoritmo que possa imprimir os m�ltiplos de 5, no intervalo de 1 at� 500:

int main()
{
	setlocale(LC_ALL, "portuguese");
	int i, r;
	do{
	system("color 1F");	
	system("cls");	
	printf("..................................................................\n");
	printf(" Programa que imprime os m�ltiplos de 5, no intervalo de 1 at� 500\n");
	printf("..................................................................\n\n");
	for(i=5; i<=500; i=i+5){
		printf("  M�ltiplos de 5: = %d\n",i);
	}
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

