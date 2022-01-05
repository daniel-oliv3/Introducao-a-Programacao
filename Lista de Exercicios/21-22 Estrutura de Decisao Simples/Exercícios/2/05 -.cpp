#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// 5 – Dados dois números A e B, digitados pelo usuário,
//escreva-os em ordem crescente:


int main()
{
	setlocale(LC_ALL, "portuguese");
	int A, B;
	printf("Informe o primeiro valor: \n");
	scanf("%d",&A);
	printf("Informe o segundo valor: \n");
	scanf("%d",&B);
	if(A < B)
	{
		printf("A ordem crescente é: %d e %d\n",A,B);
	}
	else
		printf("A orgem crescente é: %d e %d\n",B,A);	
	system("Pause");
	return 0;
}

