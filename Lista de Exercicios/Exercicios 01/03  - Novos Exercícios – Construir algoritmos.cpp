#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//3 - Fa�a um algoritmo que leia tr�s n�meros, mostre o resultado da
//multiplica��o dos dois primeiros e somar o resultado da multiplica��o
//com o terceiro n�mero:

int main()
{
	setlocale(LC_ALL, "portuguese");
	
	int num1, num2, num3, mult, soma;
	
	printf("Digite o primeiro n�mero: ");
	scanf("%d",&num1);
	printf("Digite o segundo n�mero: ");
	scanf("%d",&num2);
	printf("Digite o terceiro n�mero: ");
	scanf("%d",&num3);
	mult = num1*num2;
	soma = mult+num3;
	printf("O resultado da multiplica��o dos dois primeiros n�mero �: %d\n",mult);
	printf("O resultado da soma do resultado da multiplica��o com o terceiro n�mero �: %d\n",soma);
	
	
	system("pause");
	return 0;
}
