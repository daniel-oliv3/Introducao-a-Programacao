#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//23. Todo restaurante, embora por lei não possa obrigar o cliente a pagar, cobra 10% de comissão para o garçom.
//Faça um algoritmo que leia o valor gasto com as despesas realizadas em um restaurante e imprima o valor
//total com a gorjeta:


int main()
{
	setlocale(LC_ALL, "portuguese");
	float conta, result;
	
	printf("Informe o valor da conta: ");
	scanf("%f",&conta);
	result = ((conta*10)/100)+conta;
	printf("O valor total da conta com 10%% de gorjeta é: %f\n",result);
	
	system("pause");
	return 0;
}
