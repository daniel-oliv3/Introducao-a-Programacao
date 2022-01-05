#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//39. Faça um algoritmo que receba a quantidade de dinheiro em reais que uma pessoa que vai viajar possui. Ela
//vai passar por vários países e precisa converter seu dinheiro em dólares, marco alemão e libras. Sabendo-se
//que a cotação do dólar é de R$ 1,98; de marco alemão de R$ 2,10; e libras de R$ 2,65. O algoritmo deve
//fazer as conversões e mostrar os resultados:


int main()
{
	setlocale(LC_ALL, "portuguese");
	float real, dolar, marco, libras;
	
	printf("Informe a quantidade de dinheiro em reais para a viajem: \n");
	scanf("%f",&real);
	dolar = real/1.98;
	marco = real/2.10;
	libras = real/2.65;
	printf("O valor convertido de real para dóla é: %.2f\n",dolar);
	printf("O valor convertido de real para marco alemão é: %.2f\n",marco);
	printf("O valor convertido de real para libras é: %.2f\n",libras);
	
	system("pause");
	return 0;
	
}
