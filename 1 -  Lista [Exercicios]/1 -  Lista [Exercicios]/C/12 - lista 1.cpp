#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//12. A Loja Mamão com Açúcar está vendendo seus produtos em 5 (cinco) prestações sem juros. Faça um algoritmo
//que receba um valor de uma compra e mostre o valor das prestações:


int main()
{
	setlocale(LC_ALL, "Portuguese");
	float compra, prestacao;
	
	printf("###### LOJA MAMÃO COM ACÚLCAR ######\n\n");
	printf("Informe o valor da compra: ");
	scanf("%f",&compra);
	prestacao = compra/5;
	printf("Cinco Prestação de: %f\n\n",prestacao);	
	
	
	system("pause");
	return 0;
	
}

