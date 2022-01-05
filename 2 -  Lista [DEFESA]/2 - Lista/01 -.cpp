#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//1. Ler as 3 notas de um aluno, calcular sua média aritmética e imprimir APROVADO se a Média for maior ou
//igual que 7,0 e REPROVADO caso a média for menor que 3,0 e PROVA FINAL se a média for menor que
//7,0 e maior ou igual que 3,0:

int main()
{
	setlocale(LC_ALL, "portuguese");
    float n1, n2, n3, m; // declaração de variaveis do tipo float
	printf("Informe a primeira nota: \n");
	scanf("%f",&n1);
	printf("Informe a segunda nota: \n");	
	scanf("%f",&n2);
	printf("Informe a terceira nota: \n");
	scanf("%f",&n3);
	m = (n1+n2+n3)/3;
	if(m >=  7) // se(m maior ou igual a 7)
	{
		printf("Sua média é: %.2f\n",m);
		printf("Aluno APROVADO!\n");
	}
	if(m < 7 && m >= 3) //se(m menor que 7 e m maior que 3)
	{
		printf("Sua média é: %.2f\n",m);
		printf("PROVA FINAL!\n");
	}
	if(m < 3) // se(m menor que 3)
	{
		printf("Sua média é: %.2f\n",m);
		printf("Aluno REPROVADO!\n");
	}
	system("Pause");
	return 0;
}

