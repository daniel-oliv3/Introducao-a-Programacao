#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//38. Sabe-se que o quilowatt de energia custa um sexto do sal�rio m�nimo. Fa�a um algoritmo que receba o valor
//a) O valor de cada quilowatts;
//b) O valor a ser pago por essa resid�ncia;
//c) O valor a ser pago com 15% de desconto

int main()
{
	setlocale(LC_ALL, "portuguese");
	float quilowatt, salario, valortotal, valorpagar, qw; 
	
	printf("Informe o valor do sal�rio minimo a receber: \n");
	scanf("%f",&salario);
	printf("Informe a quantidade de quilowatts consumida por uma resid�ncia: \n");
	scanf("%f",&quilowatt);
	qw = salario/6;
	valortotal = quilowatt*qw;
	valorpagar = valortotal*0.15/100;
	
	printf("O valor de cada quilowatts �: %.2f\n",quilowatt);
	printf("O valor a ser pago por essa resid�ncia �: %.2f\n",valortotal);
	printf("O valor a ser pago com 15%% de desconto �: %.2f\n",valorpagar);
	
	
	
	system("pause");
	return 0;
}
