#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//12. A Loja Mam�o com A��car est� vendendo seus produtos em 5 (cinco) presta��es sem juros. Fa�a um algoritmo
//que receba um valor de uma compra e mostre o valor das presta��es:


int main()
{
	setlocale(LC_ALL, "Portuguese");
	float compra, prestacao;
	
	printf("###### LOJA MAM�O COM AC�LCAR ######\n\n");
	printf("Informe o valor da compra: ");
	scanf("%f",&compra);
	prestacao = compra/5;
	printf("Cinco Presta��o de: %f\n\n",prestacao);	
	
	
	system("pause");
	return 0;
	
}

