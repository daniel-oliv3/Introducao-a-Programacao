#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//4 � Fa�a um algoritmo que leia um n�mero inteiro e escreva o seu
//sucessor.

int main()
{
	setlocale(LC_ALL, "portuguese");
	int num1, r;
	printf("Informe um n�mero: \n");
	scanf("%d",&num1);
	r = num1+1;
	printf("O n�mero digitado foi o %d, e seu sucessor �: %d\n",num1,r);
	
	
	system("Pause");
	return 0;
}

