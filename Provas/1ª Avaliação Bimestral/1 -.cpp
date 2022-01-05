#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

//Existem épocas de pouco dinheiro, onde os supermercados estão procurando maneiras para atrair clientes e aumentar suas vendas , 
//estrategia mais utilizada é a oferta de desconto. Faça um algoritmo que leia o valor de uma mercadoria do supermercado e mstre 
//para o cliente o novo valor tendo em vista que o desconto do produto e de 12%

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	float valor, n_valor;
	printf("\n\n  Digite o valor do produto: ");
	scanf("%f",&valor);
	n_valor=valor*0.88;  //desconto de 12%
	printf("  O novo valor com desconto de 12%% é: %.2f\n",n_valor);
	system("Pause");
	return 0;
}

