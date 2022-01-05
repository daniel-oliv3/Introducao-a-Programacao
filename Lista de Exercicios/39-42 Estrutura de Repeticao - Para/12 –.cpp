#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* P12 – Faça um algoritmo para ler dois números
e imprimir todos os números entre eles. Seu
algoritmo deve tratar tanto se o primeiro for
ou se o segundo for maior:;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int num1, num2;
	printf("  Digite o 1º número: ");
	scanf("%d",&num1);
	printf("  Digite o 2º número: ");
	scanf("%d",&num2);
	if(num1>=num2 && num1<=num2){
		printf("  %d\n",num1);
	}else{
		if(num2>=num1 && num2<=num1){
			printf("  %d\n",num2);
		}
	}
	printf("\n");
	system("Pause");
	return 0;
}

/**/
