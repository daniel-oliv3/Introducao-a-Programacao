#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//3 � Fa�a um algoritmo que leia tr�s n�meros, mostre o resultado da
//multiplica��o dos dois primeiros e somar o resultado da multiplica��o
//com o terceiro n�mero:


int main()
{
	setlocale(LC_ALL, "portuguese");
	int num1, num2, num3, r1, r2;
	printf("Informe o primeiro n�mero: \n");
	scanf("%d",&num1);
	printf("Informe o segundo n�mero: \n");
	scanf("%d",&num2);
	printf("Informe o terceiro n�mero: \n");
	scanf("%d",&num3);
	r1 = num1*num2;
	r2 = r1+num3;
	printf("A multiplica��o dos dois primeiros n�mero �: %d x %d = %d\n",num1,num2,r1);
	printf("A soma do resultado da multiplica��o com o terceiro n�mero �: %d + %d = %d\n",r1,num3,r2);
	system("Pause");
	return 0;
}

