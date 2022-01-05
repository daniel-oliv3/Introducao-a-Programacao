#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
 
//11. Criar um algoritmo que leia o limite inferior e limite superior, calcular e imprimir o somatório dos valores entre os
//limites (validar se os limites foram informados corretos):

int main()
{
	setlocale(LC_ALL, "portuguese");
	int inicio, fim, i, resp=0;
	printf("  Limite inferior: ");
	scanf("%d",&inicio);
	printf("  Limite superior: ");
	scanf("%d",&fim);	
	for(i=inicio; i<=fim; i++){
		
		printf("    %d\n",i);
		resp=(inicio+fim);
		
	}
	printf("  A somatório dos valores entre os limites: %d\n",resp);
	system("Pause");
	return 0;
}


