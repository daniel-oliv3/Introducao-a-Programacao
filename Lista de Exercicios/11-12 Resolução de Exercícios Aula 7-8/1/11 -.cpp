#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// 11 � Ler dois valores A e B, efetuar a troca dos valores de forma que a
//vari�vel A passe a possuir o valor da vari�vel B e que a vari�vel
//B passe a possuir o valor da vari�vel A. Apresentar os valores
//trocados.

int main()
{
	setlocale(LC_ALL, "portuguese");
	int A, B, aux;
	printf("Informe o primeiro valor:\n ");
	scanf("%d",&A);
	printf("Informe o segundo valor:\n ");
	scanf("%d",&B);
	aux = A;
	A = B;
	B = aux;
	printf("Os valores trocados �: A[%d] B[%d]\n",A,B);
	
	
	system("Pause");
	return 0;
}

