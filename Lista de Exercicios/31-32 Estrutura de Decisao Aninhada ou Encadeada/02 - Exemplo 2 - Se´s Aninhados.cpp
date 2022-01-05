#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//algoritmo que lê dois números e escreve o maior.

int main()
{
	setlocale(LC_ALL, "portuguese");
	int a, b;
	printf("Entre com 1° número: \n");
	scanf("%d",&a);
	printf("Entre com 2° número: \n");
	scanf("%d",&b);
	if(a>b){
		printf("O maior é: %d\n",a);
	}else if(a==b){
			printf("São Iguais\n");
		}else{
			printf("O maior é: %d\n",b);
		}
	system("Pause");
	return 0;
}

