#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>
#include<math.h>

// faça um algoritmo queleia os numeros inteiros não determinados e escreva seu cubo ate que o osuario deseja sair;

int main()
{
	setlocale(LC_ALL, "portuguese");
	int num;
	float cubo;
	char resp;
	do{
		printf("Informe um número: \n");
		scanf("%d", &num);
		cubo=pow(num, 3);
		printf("O número é %d - o seu cubo é: %f\n",num,cubo);
		printf("Deseja continuar S - sim N não\n");
		scanf("%c",&resp);
	}while(resp=='S' || resp=='s');
	system("Pause");
	return 0;
}

