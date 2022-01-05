#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//42. Um motorista deseja colocar no seu tanque X reais de gasolina. Escreva um algoritmo para ler o preço do
//litro da gasolina e o valor do pagamento, e exibir quantos litros ele conseguiu colocar no tanque.


int main()
{
	setlocale(LC_ALL, "portuguese");
	float x, valor, total;
	
	printf("Informe o preço da gasolina: \n");
	scanf("%f",&x);
	printf("Informe o valor em reais: \n");
	scanf("%f",&valor);
	total = x/valor;
	printf("O total de litros de gasolina é: %.2f\n",total);
	system("pause");
	return 0;
	
	
}
