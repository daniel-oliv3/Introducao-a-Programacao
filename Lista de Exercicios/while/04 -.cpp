#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>
#include<ctype.h>

// exemplo 04 - dada a descri��o de um produto e o pre�o desenvolver um algoritmo que calcule e mostre o novo pre�o do produto com um almento de 30%.
// repetir o processo enquanto o usuario desejar.

int main()
{
	setlocale(LC_ALL, "portuguese");
	char resposta, descricao[10];
	float preco, nv_preco;
	resposta='S';
	while((resposta=='S')||(resposta=='s')){
		printf("Informe o produto: \n");
		fflush(stdin); //limpa todo arquivo, todo pad�o de entrada;
		gets(descricao);
		printf("Informe o pre�o: \n");
		scanf("%f",&preco);
		nv_preco=preco*1.30;
		printf("O novo pre�o de %s � = %.2f\n", descricao,nv_preco);
		printf("Deseja continuar S - sim ou N n�o\n");
		scanf(" %c",&resposta);
		resposta=toupper(resposta);
		while(resposta!='S' && resposta!='N'){
				if(resposta!='S' || resposta!='N'){
					printf("Letra Invalida!\n");
				}
					printf("Deseja continuar S - sim ou N n�o\n"); // PARA ATUALIZAR
					scanf("%c", &resposta);
					resposta=toupper(resposta);
		}
	
	}
	system("Pause");
	return 0;
}

