#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//4 – Faça um algoritmo que leia um número inteiro e escreva o seu
//sucessor.

int main()
{
	setlocale(LC_ALL, "portuguese");
	int num1, r;
	printf("Informe um número: \n");
	scanf("%d",&num1);
	r = num1+1;
	printf("O número digitado foi o %d, e seu sucessor é: %d\n",num1,r);
	
	
	system("Pause");
	return 0;
}

