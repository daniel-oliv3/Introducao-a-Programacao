#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//26 - Fa�a um algoritmo para calcular a quantidade de dinheiro gasta por um fumante. Dados: o n�mero de anos
//que ele fuma, o n�mero de cigarros fumados por dia e o pre�o de uma carteira:

int main()
{
	setlocale(LC_ALL, "portuguese");
	
	float preco,  cigarros, totalcigarrosdias, anos, result;
	
	printf("Informe o N�mero de Cigarros Fumados Por Dia: ");
	scanf("%f",&cigarros);
	printf("Informe o N�mero de Anos Fumados: ");
	scanf("%f",&anos);
	printf("Informe o Pre�o de Uma Carteira de Cigarro: ");
	scanf("%f",&preco);
	totalcigarrosdias = (anos*365)*cigarros;
	result = totalcigarrosdias*preco/20;
	printf("O Total de Dinheiro Gasto �: %f\n",result);
	
	system("pause");
	return 0;
}
