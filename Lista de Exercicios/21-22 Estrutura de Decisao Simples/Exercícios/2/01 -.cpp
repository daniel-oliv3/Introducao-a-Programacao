#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// 1 � Fa�a um algoritmo que leia um n�mero inteiro e, somente
//se, ele for um n�mero par, imprimir sua metade

int main()
{
	setlocale(LC_ALL, "portuguese");
	int num;
	printf("Informe um n�mero inteiro: \n");
	scanf("%d",&num);
	if(num % 2 == 0) // compara se o numero e par
	{
		printf("A metade do n�mero %d �: %d [Par]\n",num,num/2);
	}
	else
		printf("O n�mero informado foi: %d [Impar]\n",num);
	system("Pause");
	return 0;
}

