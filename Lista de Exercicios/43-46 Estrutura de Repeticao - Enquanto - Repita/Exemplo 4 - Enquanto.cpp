#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* Dada a descrição de um produto e o
preço desenvolver um algoritmo que
calcule e mostre o novo preço do
produto com um aumento de 30%.
Repetir o processo enquanto o
usuário desejar:;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	char resposta, descricao[10];
	float preco, nv_preco;
	resposta='S';
	while((resposta == 'S') || (resposta == 's')){
		fflush(stdin); // antes okay
		printf("\n  Informe o produto: ");
		gets(descricao);
		fflush(stdin);
		printf("  informe o preço: ");
		scanf("%f",&preco);
		nv_preco=preco*1.30;
		printf("  O novo preço de %s é = %.2f\n",descricao,nv_preco);
		printf("  Deseja continuar S - sim ou N - não: ");
		scanf("%s",&resposta);
	}
	printf("\n");
	system("Pause");
	return 0;
}

/**/
