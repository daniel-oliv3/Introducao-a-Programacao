#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//P5 � Fa�a um algoritmo para ler 10 n�meros e
//escrever quantos s�o pares:

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int c, numero;
	printf("\n\n");
	for(c=1; c<=10; c++){
		printf("  Digite um n�mero: ");
		scanf("%d",&numero);
		if(numero % 2 == 0){
			printf("\n  N�mero %d � par\n",numero);
		}
	}	
	system("Pause");
	return 0;
}

