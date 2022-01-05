#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// 7 – Faça um algoritmo que calcule e mostre a idade média de três
//pessoas.

int main()
{
	setlocale(LC_ALL, "portuguese");
	float a, b, c, m;
	printf("Informe a idade da primeira pessoa: \n");
	scanf("%f",&a);
	printf("Informe a idade da segunda pessoa: \n");
	scanf("%f",&b);
	printf("Informe a idade da terceira pessoa: \n");
	scanf("%f",&c);
	m = (a+b+c)/3;
	printf("A idade média de três pessoas é: %.2f\n",m);	
	system("Pause");
	return 0;
}

