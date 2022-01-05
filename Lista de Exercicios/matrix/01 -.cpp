#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// Programa que lê os elementos de uma matriz 3 x 3;

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int numeros[3][3], l, c;
	for(l=0; l<3; l++){
		for(c=0; c<3; c++){
			printf("  Digite o número para a linha %d coluna %d: ",l+1,c+1);
			scanf("%d",&numeros[l][c]);
		}
	}
	for(l=0; l<3; l++){
		for(c=0; c<3; c++){
			printf("  Elemento números [%d][%d] = %d\n",l,c,numeros[l][c]);
		}
	}
	system("Pause");
	return 0;
}

