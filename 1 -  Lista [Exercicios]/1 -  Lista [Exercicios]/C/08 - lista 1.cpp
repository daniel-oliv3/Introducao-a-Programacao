#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//8. O índice de massa corpórea (IMC) de uma pessoa é igual ao seu peso (em quilogramas) dividido pelo
//quadrado de sua altura (em metros). Faça um algoritmo que receba o peso e altura de uma pessoa e informe
//o valor de seu IMC:

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	float peso, altura, imc;
	
	printf("Informe o Seu Peso: ");
	scanf("%f",&peso);
	printf("Informe Sua Altura: ");
	scanf("%f",&altura);
	imc = peso / (altura * altura);
	printf("O Seu Valor de IMC é: %f\n",imc);
	
	system("pause");
	return 0;
}
