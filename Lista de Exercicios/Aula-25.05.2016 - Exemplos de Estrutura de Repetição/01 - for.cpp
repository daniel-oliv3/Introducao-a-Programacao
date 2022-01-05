#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// Programa que ler cinco vezes um conjunto de

int main()
{
	setlocale(LC_ALL, "portuguese");
	int a, b, r, c;
	c=1;
	for(c=1; c<=5;c++){
		printf("Informe o valor para variavel A: \n");
		scanf("%d",&a);
		printf("Informe o valor para variavel B: \n");
		scanf("%d",&b);
		r=a+b;
		printf("O %d valor da variável R equivale a: %d\n",c,r);
		c=c+1; // essa instrução em linguagem c pode ser representada de outra forma, c++;
	}	
	system("Pause");
	return 0;
}

