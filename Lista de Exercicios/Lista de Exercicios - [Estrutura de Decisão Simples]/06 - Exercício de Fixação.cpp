#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//6 - Fa�a um algoritmo que leia a quantidade de horas
//trabalhadas no m�s de um funcion�rio, se for maior que 180
//calcular e verificar quantas horas extras ele fez e informar
//quanto receber� no final do m�s de horas extras e seu
//sal�rio, a hora dele custa R$ 14,20:

int main()
{
	setlocale(LC_ALL, "portuguese");
	float htm, hx, rst;
	printf("Informe a quantidade de horas trabalhadas no m�s:\n");
	scanf("%f",&htm);
	hx = htm/14.20;
	rst = htm*14.20;
	if(htm > 180) // se, maior que 180) escreva...
	{
		printf("O total de horas extra �: %.f\n",hx);
		printf("O total a receber �: %.2f\n",rst);
	}
	else // caso contrario...
	{
		printf("O total a receber �: %.2f\n",rst);
	}
	
	system("pause");
	return 0;
}
