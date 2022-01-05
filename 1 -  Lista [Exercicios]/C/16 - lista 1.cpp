#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

//16. Faça um algoritmo que receba um capital C, uma taxa de juros mensal fixa J e um período de aplicação em
//meses M, calcule e mostre o montante F arrecadado no final do período: F = C*(1+J/100)M


int main()
{
	setlocale(LC_ALL, "Portuguese");
	float c, j, m, f,ca1, ca2;
	printf("Digite o valor do capital: ");
	scanf("%f",&c);
	printf("Digite a taxa de juros mensal: ");
	scanf("%f",&j);
	printf("Digite o periodo em meses: ");
	scanf("%f",&m);
	ca1 = (j/100);
	ca2 = c*pow((1*ca1),m);
	printf("O total e: %lf\n",m);
	system("pause");
	return 0;
}
