#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//algoritmo que l� dois n�meros e escreve o maior.

int main()
{
	setlocale(LC_ALL, "portuguese");
	int a, b;
	printf("Entre com 1� n�mero: \n");
	scanf("%d",&a);
	printf("Entre com 2� n�mero: \n");
	scanf("%d",&b);
	if(a>b){
		printf("O maior �: %d\n",a);
	}if(a==b){
		printf("S�o Iguais\n");
	}if(a<b){
		printf("O maior �: %d\n",b);
	}
	system("Pause");
	return 0;
}

