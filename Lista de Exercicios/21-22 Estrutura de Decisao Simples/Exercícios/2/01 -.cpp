#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// 1 – Faça um algoritmo que leia um número inteiro e, somente
//se, ele for um número par, imprimir sua metade

int main()
{
	setlocale(LC_ALL, "portuguese");
	int num;
	printf("Informe um número inteiro: \n");
	scanf("%d",&num);
	if(num % 2 == 0) // compara se o numero e par
	{
		printf("A metade do número %d é: %d [Par]\n",num,num/2);
	}
	else
		printf("O número informado foi: %d [Impar]\n",num);
	system("Pause");
	return 0;
}

