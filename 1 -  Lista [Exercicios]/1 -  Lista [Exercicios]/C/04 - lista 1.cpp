#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//4. Faça um algoritmo que leia um valor em reais e a cotação do dólar atual. Em seguida, imprima o valor
//correspondente em dólares:


int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	float reais, cotacao, conversao;
	
	printf("Informe Um Valor Em Reais: ");
	scanf("%f",&reais);
	printf("Informe o Valor da Cotação Atual do Dólar: ");
	scanf("%f",&cotacao);
	conversao = reais/cotacao;
	printf("O Valor Correspondente Em Dólar é: %f\n",conversao);
	
	
	
	
	system("pause");
	return 0;
}
