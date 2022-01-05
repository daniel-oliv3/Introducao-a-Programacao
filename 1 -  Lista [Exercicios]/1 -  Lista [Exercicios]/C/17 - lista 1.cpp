#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//17. Existem épocas de pouco dinheiro, onde os supermercados estão procurando maneiras para atrair clientes e
//aumentar suas vendas, a estratégia mais utilizada é a oferta de desconto. Faça um algoritmo que leia o valor
//de uma mercadoria do supermercado e mostre para o cliente o novo valor, tendo em vista que o desconto do
//produto é de 21%:


int main()
{
	setlocale(LC_ALL, "Portuguese");
	float valor, desconto, novoValor;
	
	printf("Informe o valor do produto: ");
	scanf("%f",&valor);
	desconto = valor*21/100;
	novoValor = valor-desconto;
	printf("O valor do produto com desconto de 21%%  é: %f\n",novoValor);
	system("pause");
	return 0;
	
}

