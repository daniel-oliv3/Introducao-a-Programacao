#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// 5 � Fa�a um algoritmo que leia um n�mero inteiro e escreva o seu
//antecessor.

int main()
{
	setlocale(LC_ALL, "portuguese");
	int num1, r;
	printf("Informe o um n�mero: \n");
	scanf("%d",&num1);
	r = num1-1;
	printf("O n�mero digitado foi o %d, e o seu antecessor �: %d\n", num1,r);	
	
	
	system("Pause");
	return 0;
}

