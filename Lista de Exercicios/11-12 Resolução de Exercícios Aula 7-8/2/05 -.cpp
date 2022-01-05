#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// 5 – Leia duas variáveis A e B. Para calcular X = A + B / A – B.

int main()
{
	setlocale(LC_ALL, "portuguese");
	int a, b, x;
	printf("Informe o primeiro valor: \n");
	scanf("%d",&a);
	printf("Informe o segundo valor: \n");
	scanf("%d",&b);
	x = a + b/a - b;
	printf("O resultado é: %d\n",x);
	system("Pause");
	return 0;
}

