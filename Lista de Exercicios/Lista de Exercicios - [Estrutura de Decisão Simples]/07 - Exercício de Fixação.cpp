#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//7 - Fa�a um algoritmo que leia duas notas de um aluno, calcule
//a m�dia desse aluno. Se a m�dia for menor que 5,
//acrescentar um ponto extra de 0.3 para cada um dos 3
//exerc�cios que ele fez, no final informe a m�dia:

int main()
{
	setlocale(LC_ALL, "portuguese");
	float n1, n2, m, acr;
	printf("Informe a primeira nota: \n");
	scanf("%f",&n1);
	printf("Informe a segunda nota: \n");
	scanf("%f,&n2");
	m = (n1+n2)/2;
	acr = m+0.9; //+0.3+0.3;
	if(m < 5)
	{
		printf("Sua m�dia �: %.2f\n",m);
		printf("Sua m�dia com acrescimo de 0.3 em cada um dos 3 exercicio �: %.2f\n",acr);
	}
	else
	{
		printf("Sua m�dia �: %.2f\n",m);
	}

	system("pause");
	return 0;
}
