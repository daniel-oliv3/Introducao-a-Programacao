#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

/* Escreva um algoritmo que leia n�meros informados
pelo usu�rio e imprimir o quadrado do n�mero at�
que informe um n�mero par;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int num;
	do{
		printf("  Informe um n�mero: ");
		scanf("%d",&num);
		printf("  O n�mero � %d e o quadrado � %.2f\n",num,pow(num,2));
	}while(num % 2 != 0); // programa para quando um n�mero par e digitado;
	system("Pause");
	return 0;
}

/**/
