#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

//P8 – Escreva um algoritmo para ler 10 valores e imprimir
//a média aritmética destes números

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int c, soma, numero;
	printf("\n");
	for(c=1; c<=10; c++){
		printf("  Digite o %dº número: ",c);
		scanf("%d",&numero);
		soma=soma+numero;
	}
	printf("\n\n  A média aritmética é: %.2f\n",soma/10.0); //exibir a media(soma/contador)
	system("Pause");
	return 0;
}

