#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

/* Escreva um algoritmo que leia números informados
pelo usuário e imprimir o quadrado do número até
que informe um número par;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int num;
	do{
		printf("  Informe um número: ");
		scanf("%d",&num);
		printf("  O número é %d e o quadrado é %.2f\n",num,pow(num,2));
	}while(num % 2 != 0); // programa para quando um número par e digitado;
	system("Pause");
	return 0;
}

/**/
