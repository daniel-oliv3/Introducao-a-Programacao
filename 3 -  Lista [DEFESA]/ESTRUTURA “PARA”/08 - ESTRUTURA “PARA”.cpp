#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//8. Criar um algoritmo que leia um n�mero qualquer e imprimir o somat�rio de 1 at� o n�mero informado. Exemplo: se o
//usu�rio informar 5, ent�o, o somat�rio ser� 5+4+3+2+1, resultado da soma ser� 15:

int main()
{
	setlocale(LC_ALL, "portuguese");
	int num, i, r, re;
	do{
	system("color 1F");	
	system("cls");
	printf("....................................................\n");	
	printf(" Programa que ler um n�mero e imprime a somatoria\n");
	printf(" de 1 at� o n�mero informado;\n");
	printf("....................................................\n\n");	
	re=0;
	printf("  Digite um n�mero: ");
	scanf("%d",&num);
	printf("\n");
	for(i=1;i<=num;i++){
		re=re+i;
		printf("    %d\n",i);
	}
	printf("......................\n\n");
	printf("\n  O resultado da soma: %d\n",re);
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

