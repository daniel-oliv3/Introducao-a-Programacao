#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//exemplo, pg 25

int main()
{
	setlocale(LC_ALL, "portuguese");
	int a;
	printf("Entre com 1a n�mero: \n");
	scanf("%d",&a);
	if(a >= 10 && a <= 30){
		printf("N�mero V�lido!\n");
	}
	if(a < 10 || a > 30){
		printf("N�mero Invalido!\n");
	}
	system("Pause");
	return 0;
}

