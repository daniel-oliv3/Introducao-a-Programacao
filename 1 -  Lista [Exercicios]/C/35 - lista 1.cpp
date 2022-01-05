#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//35. Sávio recebeu seu salário e precisa pagar duas contas atrasadas. Em razão do atraso, ele deverá pagar multa
//de 2,5% sobre cada conta. Faça um algoritmo que calcule e mostre o quanto restará do salário de Sávio:

int main()
{
	setlocale(LC_ALL, "portuguese");
	float salario, conta1, conta2, novosaldo, multa1, multa2;
	
	printf("Informe o seu salário a receber: \n");
	scanf("%f",&salario);
	printf("Informe o valor da primeira conta atrasada: \n");
	scanf("%f",&conta1);
	printf("Informe o valor da segunda conta atrasada: \n");
	scanf("%f",&conta2);
	
	multa1 = conta1*02.5/100;
	multa2 = conta2*02.5/100;
	
	
	//multa1 = conta1/100*02.5;
	//multa2 = conta2/100*02.5;
	novosaldo = salario-multa1-multa2-conta1-conta2;
	
	printf("O Saldo é de: %.2f.\n",novosaldo);
	
	
	system("pause");
	return 0;
}
