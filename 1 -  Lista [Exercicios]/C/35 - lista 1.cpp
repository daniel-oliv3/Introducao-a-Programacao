#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//35. S�vio recebeu seu sal�rio e precisa pagar duas contas atrasadas. Em raz�o do atraso, ele dever� pagar multa
//de 2,5% sobre cada conta. Fa�a um algoritmo que calcule e mostre o quanto restar� do sal�rio de S�vio:

int main()
{
	setlocale(LC_ALL, "portuguese");
	float salario, conta1, conta2, novosaldo, multa1, multa2;
	
	printf("Informe o seu sal�rio a receber: \n");
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
	
	printf("O Saldo � de: %.2f.\n",novosaldo);
	
	
	system("pause");
	return 0;
}
