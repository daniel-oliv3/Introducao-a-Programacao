#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

//6. A s�rie de Fibonacci � formada pela seguinte sequ�ncia: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, ... etc. Escreva um
//algoritmo que gere a s�rie de Fibonacci conforme o termo que o usu�rio informar:

int main()
{
	setlocale(LC_ALL, "portuguese");	
	int num, i, r, f1=2, f2=1, f3;
	do{
	system("color 1F");	
	system("cls");
	printf("......................................................\n");	
	printf("            Programa s�rie de Fibonacci\n");
	printf("......................................................\n\n");	
	printf("  Digite um n�mero de termo para a s�rie FIBONACCI: ");
	scanf("%d",&num);
	printf("\n\n");
	do{
		f3=f2+f1;
		printf(" - %d",f3);
		f1=f2;
		f2=f3;
		i++;
	fflush(stdin);	
	}while(i<num);
	printf("\n\n");
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

