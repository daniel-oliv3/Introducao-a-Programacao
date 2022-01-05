#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//13. Faça um algoritmo que dado o tamanho de um arquivo em MB (mega bytes), converta todos os valores para
//bits, informe a velocidade de conexão (em bits por segundo), e mostre como resultado o tempo necessário
//para download do arquivo:


int main()
{
	setlocale(LC_ALL, "portuguese");
	
	float a, b, c, t;
	
	printf("Digite o tamanho do documento: ");
	scanf("%f", &a);
	printf("Digite a velocidade de conexão do downloads: ");
	scanf("%f", &b);
	c = (8388608*a);
	t = (c/b);
	printf("O tamanho do arquivo é de: %f bits\n",c);
	printf("A velocidade de downloads é: %f bits/s\n",b);
	printf("O tempo de downloads é: %f\n",t);
	system("pause");
	return 0;
}


