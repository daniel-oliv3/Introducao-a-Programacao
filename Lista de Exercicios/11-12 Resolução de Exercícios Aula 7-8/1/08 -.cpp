#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// 8 � Ler dois valores A e B, efetuar as opera��es de adi��o,
//subtra��o, multiplica��o e divis�o de A por B, apresentando no final os
//quatro resultados obtidos.

int main()
{
	setlocale(LC_ALL, "portuguese");
	float A, B;
	printf("Informe o primeiro n�mero: \n");
	scanf("%f",&A);
	printf("Informe o segundo n�mero: \n");
	scanf("%f",&B);
	printf("O resultado da adi��o �: %.f + %.f = %.f\n",A,B,A+B);
	printf("O resultado da subtra��o �: %.f - %.f = %.f\n",A,B,A-B);
	printf("O resultado da multiplica��o �: %.f x %.f = %.f\n",A,B,A*B);
	printf("O resultado da divis�o �: %.f %% %.f = %.2f\n",A,B,A/B);	
	
	
	system("Pause");
	return 0;
}

