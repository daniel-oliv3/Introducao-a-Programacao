#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//13. Fa�a um algoritmo que dado o tamanho de um arquivo em MB (mega bytes), converta todos os valores para
//bits, informe a velocidade de conex�o (em bits por segundo), e mostre como resultado o tempo necess�rio
//para download do arquivo:


int main()
{
	setlocale(LC_ALL, "portuguese");
	
	float a, b, c, t;
	
	printf("Digite o tamanho do documento: ");
	scanf("%f", &a);
	printf("Digite a velocidade de conex�o do downloads: ");
	scanf("%f", &b);
	c = (8388608*a);
	t = (c/b);
	printf("O tamanho do arquivo � de: %f bits\n",c);
	printf("A velocidade de downloads �: %f bits/s\n",b);
	printf("O tempo de downloads �: %f\n",t);
	system("pause");
	return 0;
}


