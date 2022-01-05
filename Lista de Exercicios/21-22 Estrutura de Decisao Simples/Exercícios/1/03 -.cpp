#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// 3 – Faça um algoritmo que leia o nome de uma pessoa, altura e seu
//sexo, verifique se é do sexo masculino e calcule seu peso ideal,
//informe no final o peso. (peso_ideal = (72.7 * altura) – 58 ):

int main()
{
	setlocale(LC_ALL, "portuguese");
	char nome[50];
	float altura, peso_ideal;
	int sexo;
	printf("Informe o seu nome: \n");
	scanf("%s",&nome);
	printf("Informe a sua altura: \n");
	scanf("%f",&altura);
	printf("Informe o seu sexo [1]Masculino - [2]Feminino\n");
	scanf("%d",&sexo);
	if(sexo == 1)
	{
		peso_ideal = (72.7 * altura) - 58;
		printf("Seu nome é: %s\n",nome);
		printf("Sua altura é: %.2f\n",altura);
		printf("Seu sexo é: Masculino \n");
		printf("Seu peso ideal é: %.2f\n",peso_ideal);
	}
	else
	{
		printf("Seu nome é: %s\n",nome);
		printf("Sua altura é: %.2f\n",altura);
		printf("Seu sexo é: Feminino \n");
	}
	system("Pause");
	return 0;
}

