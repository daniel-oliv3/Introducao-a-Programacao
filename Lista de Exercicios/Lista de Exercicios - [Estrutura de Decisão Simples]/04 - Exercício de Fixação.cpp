#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<conio.h>

/*Fa�a um algoritmo que leia o nome de uma pessoa,
altura e seu sexo, verifique se � do sexo masculino e
calcule seu peso ideal, informe no final o peso.
(peso_ideal = (72.7 * altura) � 58 ):*/


int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	char nome[100], sexo;
	float altura, peso_ideal;
	printf("  Informe o seu nome: ");
	gets(nome);
	printf("  Informe a sua altura: ");
	scanf("%f",&altura);
	printf("  Informe seu sexo [M] Masculino [F] Feminino:\n");
	scanf("%s",&sexo);
	if(sexo == 'M' || sexo == 'm'){
			printf("  Seu Sexo � Masculino\n");
			peso_ideal = 72.7*altura-58;
			printf("  Seu Peso Ideal �: %.2f\n",peso_ideal);
    }
    else{
    	printf("  Nome: %s\n",nome);
		printf("  Sexo Inv�lido!\n\a");
	}
	printf("\n");
	system("Pause");
	return 0;
}

