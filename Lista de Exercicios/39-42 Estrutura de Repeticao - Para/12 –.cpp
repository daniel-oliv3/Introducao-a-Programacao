#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* P12 � Fa�a um algoritmo para ler dois n�meros
e imprimir todos os n�meros entre eles. Seu
algoritmo deve tratar tanto se o primeiro for
ou se o segundo for maior:;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int num1, num2;
	printf("  Digite o 1� n�mero: ");
	scanf("%d",&num1);
	printf("  Digite o 2� n�mero: ");
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
