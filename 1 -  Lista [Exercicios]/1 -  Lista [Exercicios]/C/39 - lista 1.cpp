#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//39. Fa�a um algoritmo que receba a quantidade de dinheiro em reais que uma pessoa que vai viajar possui. Ela
//vai passar por v�rios pa�ses e precisa converter seu dinheiro em d�lares, marco alem�o e libras. Sabendo-se
//que a cota��o do d�lar � de R$ 1,98; de marco alem�o de R$ 2,10; e libras de R$ 2,65. O algoritmo deve
//fazer as convers�es e mostrar os resultados:


int main()
{
	setlocale(LC_ALL, "portuguese");
	float real, dolar, marco, libras;
	
	printf("Informe a quantidade de dinheiro em reais para a viajem: \n");
	scanf("%f",&real);
	dolar = real/1.98;
	marco = real/2.10;
	libras = real/2.65;
	printf("O valor convertido de real para d�la �: %.2f\n",dolar);
	printf("O valor convertido de real para marco alem�o �: %.2f\n",marco);
	printf("O valor convertido de real para libras �: %.2f\n",libras);
	
	system("pause");
	return 0;
	
}
