#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// 4 � Entrar com quatro n�meros e imprimir a m�dia ponderada,
//sabendo-se que os pesos s�o respectivamente: 1, 2, 3 e 4.

int main()
{
	setlocale(LC_ALL, "portuguese");
	float n1, n2, n3, n4, n5, mp;
	printf("Informe o primeiro n�mero: \n");
	scanf("%f",&n1);	
	printf("Informe o segundo n�mero: \n");
	scanf("%f",&n2);	
	printf("Informe o terceiro n�mero: \n");
	scanf("%f",&n3);	
	printf("Informe o quarto n�mero: \n");
	scanf("%f",&n4);	
	mp = (n1*1)+(n2*2)+(n3*3)+(n4*4)/10;
	printf("A m�dia ponderada �: %.2f\n",mp);
	system("Pause");
	return 0;
}

