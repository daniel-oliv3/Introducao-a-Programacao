#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//4. Fa�a um algoritmo que leia um valor em reais e a cota��o do d�lar atual. Em seguida, imprima o valor
//correspondente em d�lares:


int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	float reais, cotacao, conversao;
	
	printf("Informe Um Valor Em Reais: ");
	scanf("%f",&reais);
	printf("Informe o Valor da Cota��o Atual do D�lar: ");
	scanf("%f",&cotacao);
	conversao = reais/cotacao;
	printf("O Valor Correspondente Em D�lar �: %f\n",conversao);
	
	
	
	
	system("pause");
	return 0;
}
