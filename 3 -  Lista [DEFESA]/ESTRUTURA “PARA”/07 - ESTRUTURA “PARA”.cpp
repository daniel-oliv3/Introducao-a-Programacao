#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//7. Criar um algoritmo que leia um n�mero inteiro e possa imprimir a tabuada de somar e tamb�m a tabuada de subtrair
//do n�mero de 1 at� 10:

int main()
{
	setlocale(LC_ALL, "portuguese");
	int num, soma, subtracao, cont, r;
	do{
		system("color 1F");
		system("cls");
		printf("..........................................................................................\n");
		printf(" Programa que ler um n�mero e imprime a tabuada de soma e subtra��o do n�mero de 1 at� 10\n");
		printf("..........................................................................................\n\n");
		printf("  Digite um n�mero: ");
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
			printf("N�mero Invalido!\n\a"); 
	}while(r!=1 && r!=2);   
	system("cls"); 
	}while(r!=2);
	system("Pause");
	return 0;
}

