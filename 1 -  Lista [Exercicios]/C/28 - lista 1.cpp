#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//28 - O restaurante a quilo Bem-B�o cobra R$24,00 por cada quilo de refei��o. Escreva um algoritmo que leia o
//peso do prato montado pelo cliente (em quilos) e imprima o valor a pagar. Assuma que a balan�a j� desconte
//o peso do prato:


int main()
{
	setlocale(LC_ALL, "portuguese");
	float pesoprato, precokilo=24.00, valortotal;
	
	printf("Informe o Peso em Kg: ");
	scanf("%f",&pesoprato);
	valortotal = pesoprato*precokilo;
	printf("O Total a Pagar �: %f\n",valortotal);
	
	system("pause");
	return 0;
}

