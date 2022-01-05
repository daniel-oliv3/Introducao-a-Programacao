#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// 02- FAÇA UM ALGORITMO QUE CALCULE O ANO DE NASCIMENTO DE UMA PESSOA A PARTIR DE SUA IDADE E DO ANO ATUAL;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	system("color 1f");
	int anoAtual, idade, anoNasci;
	printf("\n  Digite Sua Idade: ");
	scanf("%d",&idade); 
	printf("  Informe o Ano Atual: ");
	scanf("%d",&anoAtual);
	anoNasci = anoAtual-idade;
	printf("  Seu Ano de Nascimento é: %d\n",idade);
	system("pause");
	return 0;

}
