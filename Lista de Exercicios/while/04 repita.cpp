#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>
#include<math.h>

// fa�a um algoritmo queleia os numeros inteiros n�o determinados e escreva seu cubo ate que o osuario deseja sair;

int main()
{
	setlocale(LC_ALL, "portuguese");
	int num;
	float cubo;
	char resp;
	do{
		printf("Informe um n�mero: \n");
		scanf("%d", &num);
		cubo=pow(num, 3);
		printf("O n�mero � %d - o seu cubo �: %f\n",num,cubo);
		printf("Deseja continuar S - sim N n�o\n");
		scanf("%c",&resp);
	}while(resp=='S' || resp=='s');
	system("Pause");
	return 0;
}

