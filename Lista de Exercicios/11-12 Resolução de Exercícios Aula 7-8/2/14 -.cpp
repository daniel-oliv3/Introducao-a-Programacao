#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// 14 – Leia a base e a altura de um cômodo. Calcule e mostre a
//área desse cômodo sabendo que a área=base * altura.

int main()
{
	setlocale(LC_ALL, "portuguese");
	float base, altura, area;
	printf("Informe a base de um cômodo: \n");
	scanf("%f",&base);
	printf("Informe a altura de um cômodo: \n");
	scanf("%f",&altura);
	area = base*altura;
	printf("A área desse cômodo é: %.2f\n",area);	
	system("Pause");
	return 0;
}

