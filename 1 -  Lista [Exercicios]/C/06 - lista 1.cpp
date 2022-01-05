#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//6. Faça um algoritmo que leia o nome e a idade de duas pessoas e mostre a multiplicação das idades:

int main()
{
	setlocale(LC_ALL, "Portuguese");
	char  nome1[20], nome2[20];
	int  idade1, idade2, result;
	
	printf("Informe o Nome da Primeira Pessoa: ");
	scanf("%s",&nome1);
	printf("Informe a Idade: ");
	scanf("%d",&idade1);
	printf("Informe o Nome da Segunda Pessoa: ");
	scanf("%s",&nome2);
	printf("Informe a Idade: ");
	scanf("%d",&idade2);
	result = idade1*idade2;
	printf("A multiplicação das Idades: %d\n",result);

system("pause");
return 0;	
}
