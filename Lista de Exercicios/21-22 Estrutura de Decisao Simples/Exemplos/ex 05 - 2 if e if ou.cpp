#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//exemplo, pg 25

int main()
{
	setlocale(LC_ALL, "portuguese");
	int a;
	printf("Entre com 1a número: \n");
	scanf("%d",&a);
	if(a >= 10 && a <= 30){
		printf("Número Válido!\n");
	}
	if(a < 10 || a > 30){
		printf("Número Invalido!\n");
	}
	system("Pause");
	return 0;
}

