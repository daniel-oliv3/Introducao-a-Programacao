#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//P5 – Faça um algoritmo para ler 10 números e
//escrever quantos são pares:

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int c, numero;
	printf("\n\n");
	for(c=1; c<=10; c++){
		printf("  Digite um número: ");
		scanf("%d",&numero);
		if(numero % 2 == 0){
			printf("\n  Número %d é par\n",numero);
		}
	}	
	system("Pause");
	return 0;
}

