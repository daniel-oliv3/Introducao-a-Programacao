#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//17. Existem �pocas de pouco dinheiro, onde os supermercados est�o procurando maneiras para atrair clientes e
//aumentar suas vendas, a estrat�gia mais utilizada � a oferta de desconto. Fa�a um algoritmo que leia o valor
//de uma mercadoria do supermercado e mostre para o cliente o novo valor, tendo em vista que o desconto do
//produto � de 21%:


int main()
{
	setlocale(LC_ALL, "Portuguese");
	float valor, desconto, novoValor;
	
	printf("Informe o valor do produto: ");
	scanf("%f",&valor);
	desconto = valor*21/100;
	novoValor = valor-desconto;
	printf("O valor do produto com desconto de 21%%  �: %f\n",novoValor);
	system("pause");
	return 0;
	
}

