#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* Dada a descri��o de um produto e o
pre�o desenvolver um algoritmo que
calcule e mostre o novo pre�o do
produto com um aumento de 30%.
Repetir o processo enquanto o
usu�rio desejar:
;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	char resposta, descricao[10];
	float preco, nv_preco;
	do{
		fflush(stdin);
		printf("  Informe o produto: ");
		gets(descricao);
		fflush(stdin);
		printf("  Informe o pre�o: ");
		scanf("%f",&preco);
		nv_preco=preco*1.30;
		printf("  O novo pre�o �: %s � = %.2f\n",descricao,nv_preco);
		printf("\n  Deseja continuar S - sim ou N - n�o: ");
		scanf("%s",&resposta);
	}while((resposta == 'S')||(resposta == 's'));
	printf("\n");
	system("Pause");
	return 0;
}

/**/
