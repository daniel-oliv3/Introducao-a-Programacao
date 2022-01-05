#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//5 – Faça um algoritmo que leia um número inteiro e, somente
//se, ele for um número par, imprimir sua metade;

int main()
{
	setlocale(LC_ALL, "portuguese");
	int num, metade;
	printf("Informe um número inteiro: \n");
	scanf("%d",&num);
	if(num % 2 == 0)
	{
		metade = num/2;
		printf("O número %d é par\n",num);
		printf("A metade do número %d é: %d\n",num,metade);
	}
	else
	{
		printf("Informe um número par!\n");
	}
	
	system("Pause");
	return 0;
}

