#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// 4 – Entrar com quatro números e imprimir a média ponderada,
//sabendo-se que os pesos são respectivamente: 1, 2, 3 e 4.

int main()
{
	setlocale(LC_ALL, "portuguese");
	float n1, n2, n3, n4, n5, mp;
	printf("Informe o primeiro número: \n");
	scanf("%f",&n1);	
	printf("Informe o segundo número: \n");
	scanf("%f",&n2);	
	printf("Informe o terceiro número: \n");
	scanf("%f",&n3);	
	printf("Informe o quarto número: \n");
	scanf("%f",&n4);	
	mp = (n1*1)+(n2*2)+(n3*3)+(n4*4)/10;
	printf("A média ponderada é: %.2f\n",mp);
	system("Pause");
	return 0;
}

