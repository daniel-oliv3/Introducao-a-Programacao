#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// Programa que lê os elementos de uma matriz 4 x 4;

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int numeros[4][4], l, c;
	for(l=0; l<4; l++){
		for(c=0; c<4; c++){
			printf("  Digite o número para a linha %d coluna %d: ",l,c);
			scanf("%d",&numeros[l][c]);
		}
	}
	printf("\n\n");
	for(l=0; l<4; l++){
		for(c=0; c<4; c++){  // 
			printf("    Elemento números [%d][%d] = %d\n",l,c,numeros[l][c]);
		}
		printf("\n\n");
	}
	system("Pause");
	return 0;
}

