#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//8. Criar um algoritmo que leia um número qualquer e imprimir o somatório de 1 até o número informado. Exemplo: se o
//usuário informar 5, então, o somatório será 5+4+3+2+1, resultado da soma será 15:

int main()
{
	setlocale(LC_ALL, "portuguese");
	int num, i, r, re;
	do{
	system("color 1F");	
	system("cls");
	printf("....................................................\n");	
	printf(" Programa que ler um número e imprime a somatoria\n");
	printf(" de 1 até o número informado;\n");
	printf("....................................................\n\n");	
	re=0;
	printf("  Digite um número: ");
	scanf("%d",&num);
	printf("\n");
	for(i=1;i<=num;i++){
		re=re+i;
		printf("    %d\n",i);
	}
	printf("......................\n\n");
	printf("\n  O resultado da soma: %d\n",re);
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

