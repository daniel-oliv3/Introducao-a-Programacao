#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>
#include<ctype.h>

// dada a descri��o dde um produto e o pre�o desenvolva um algoritmo que calcule e mostre o novo pre�o do produto
// com aumento de 30% Repita o processo enquanto o usuario desejar.

int main()
{
	setlocale(LC_ALL, "portuguese");
	char resposta, descricao[10];
	float preco, nv_preco;
	do{
		printf("Informe o produto: \n");
		fflush(stdin);
		gets(descricao);
		printf("Informe o pre�o: \n");
		scanf("%f",&preco);
		nv_preco=preco*1.30;
		printf("O novo pre�o de %s � = %.2f\n",descricao, nv_preco);
		do{
			printf("Deseja continuar S - sim N n�o\n");
			scanf(" %c", &resposta);
			resposta=toupper(resposta);
			if(resposta != 'S' && resposta != 'N'){
				printf("Letra Invalida!\n");
			}
		}while(resposta!='S' && resposta!='N');
	}while((resposta=='S') || (resposta=='s'));
	system("Pause");
	return 0;
}
// verdadeiro para continuar e falso para sair
