#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// 4 � Fa�a um algoritmo que leia tr�s notas de um aluno, calcule a
//m�dia e informe se o aluno foi Aprovado ( >= 7.5 ), se o aluno foi
//Reprovado ( < 5.0 ) ou se o aluno ir� para a Recupera��o.

int main()
{
	setlocale(LC_ALL, "portuguese");
	float n1, n2, n3, m;
	printf("Informe a primeira nota: \n");
	scanf("%f",&n1);
	printf("Informe a segunda nota: \n");
	scanf("%f",&n2);
	printf("Informe a terceira nota: \n");
	scanf("%f",&n3);
	m = (n1+n2+n3)/3;	
	if(m >= 7.5)
	{
		printf("Sua m�dia �: %.2f\n",m);
		printf("O aluno foi Aprovado!\n");
	}
	if(m < 5.0)
	{
		printf("Sua m�dia �: %.2f\n",m);
		printf("O aluno foi Reprovado!\n");
	}
	system("Pause");
	return 0;
}

