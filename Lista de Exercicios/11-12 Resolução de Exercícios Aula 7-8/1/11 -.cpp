#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// 11 – Ler dois valores A e B, efetuar a troca dos valores de forma que a
//variável A passe a possuir o valor da variável B e que a variável
//B passe a possuir o valor da variável A. Apresentar os valores
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
	printf("Os valores trocados é: A[%d] B[%d]\n",A,B);
	
	
	system("Pause");
	return 0;
}

