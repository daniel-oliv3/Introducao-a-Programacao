#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>


//19. Fa�a um algoritmo que receba o sal�rio base de um funcion�rio, calcule e mostre o sal�rio a receber,
//sabendo-se que o funcion�rio tem gratifica��o de 6,5% sobre o sal�rio base e paga imposto de 6% tamb�m
//sobre o sal�rio base:

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	float salariobase, grat, imposto, salarioR;
	printf("Informe o sal�rio base: ");
	scanf("%f",&salariobase);
	grat = salariobase*6.5/100;
	salarioR = salariobase+grat-imposto;
	imposto = salariobase*6/100;
	salarioR = salarioR-imposto;
	printf("O sal�rio a receber �: %f\n",salarioR);
	
	
	
	system("pause");
	return 0;
}
