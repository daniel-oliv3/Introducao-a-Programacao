#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

//22. Fa�a um algoritmo que receba o valor dos catetos de um tri�ngulo, calcule e mostre o valor da hipotenusa:

int main()
{
	setlocale(LC_ALL, "Portuguese");
	float c1, c2, h;
	printf("Informe o Valor do Cateto Oposto: ");
	scanf("%f",&c1);
	printf("Informe o Valor do Cateto adjacente: ");
	scanf("%f",&c2);
	h = sqrt(pow(c1,2)+pow(c2,2));
	printf("O Valor da Hipotenusa �: %.2f\n",h);
	
	
	system("pause");
	return 0;
}
