#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>


//19. Faça um algoritmo que receba o salário base de um funcionário, calcule e mostre o salário a receber,
//sabendo-se que o funcionário tem gratificação de 6,5% sobre o salário base e paga imposto de 6% também
//sobre o salário base:

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	float salariobase, grat, imposto, salarioR;
	printf("Informe o salário base: ");
	scanf("%f",&salariobase);
	grat = salariobase*6.5/100;
	salarioR = salariobase+grat-imposto;
	imposto = salariobase*6/100;
	salarioR = salarioR-imposto;
	printf("O salário a receber é: %f\n",salarioR);
	
	
	
	system("pause");
	return 0;
}
