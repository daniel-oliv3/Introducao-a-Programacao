#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// 2 � Ler um n�mero real e imprimir a ter�a parte deste n�mero.

int main()
{
	setlocale(LC_ALL, "portuguese");
	float num1, r;
	printf("Informe um n�mero: \n");
	scanf("%f",&num1);
	r = num1/3;
	printf("A ter�a parte de %.f �: %.2f\n",num1,r);
	system("Pause");
	return 0;
}

