#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// 2 � Fa�a um algoritmo que leia a quantidade de horas
//trabalhadas no m�s de um funcion�rio, se for maior que 180
//calcular e verificar quantas horas extras ele fez e informar
//quanto receber� no final do m�s de horas extras e seu
//sal�rio, a hora dele custa R$ 14,20:

int main()
{
	setlocale(LC_ALL, "portuguese");
	int qht;
	float h;
	printf("Informe a quantidade de horas trabalhadas no m�s: \n");
	scanf("%d",&qht);
	if(qht > 180)
	{
		printf("Informe o seu sal�rio: \n");
		scanf("%f",&sal);
		
		
	}	
	
	
	system("Pause");
	return 0;
}

