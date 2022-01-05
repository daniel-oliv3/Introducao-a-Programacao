#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// 8 – Ler dois valores A e B, efetuar as operações de adição,
//subtração, multiplicação e divisão de A por B, apresentando no final os
//quatro resultados obtidos.

int main()
{
	setlocale(LC_ALL, "portuguese");
	float A, B;
	printf("Informe o primeiro número: \n");
	scanf("%f",&A);
	printf("Informe o segundo número: \n");
	scanf("%f",&B);
	printf("O resultado da adição é: %.f + %.f = %.f\n",A,B,A+B);
	printf("O resultado da subtração é: %.f - %.f = %.f\n",A,B,A-B);
	printf("O resultado da multiplicação é: %.f x %.f = %.f\n",A,B,A*B);
	printf("O resultado da divisão é: %.f %% %.f = %.2f\n",A,B,A/B);	
	
	
	system("Pause");
	return 0;
}

