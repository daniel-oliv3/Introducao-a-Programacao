#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//5 � Fa�a um algoritmo que leia um n�mero inteiro e, somente
//se, ele for um n�mero par, imprimir sua metade;

int main()
{
	setlocale(LC_ALL, "portuguese");
	int num, metade;
	printf("Informe um n�mero inteiro: \n");
	scanf("%d",&num);
	if(num % 2 == 0)
	{
		metade = num/2;
		printf("O n�mero %d � par\n",num);
		printf("A metade do n�mero %d �: %d\n",num,metade);
	}
	else
	{
		printf("Informe um n�mero par!\n");
	}
	
	system("Pause");
	return 0;
}

