#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//26 - Faça um algoritmo para calcular a quantidade de dinheiro gasta por um fumante. Dados: o número de anos
//que ele fuma, o número de cigarros fumados por dia e o preço de uma carteira:

int main()
{
	setlocale(LC_ALL, "portuguese");
	
	float preco,  cigarros, totalcigarrosdias, anos, result;
	
	printf("Informe o Número de Cigarros Fumados Por Dia: ");
	scanf("%f",&cigarros);
	printf("Informe o Número de Anos Fumados: ");
	scanf("%f",&anos);
	printf("Informe o Preço de Uma Carteira de Cigarro: ");
	scanf("%f",&preco);
	totalcigarrosdias = (anos*365)*cigarros;
	result = totalcigarrosdias*preco/20;
	printf("O Total de Dinheiro Gasto é: %f\n",result);
	
	system("pause");
	return 0;
}
