#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "portuguese");
	float novo_salario=0, salario;
	printf("Informe o sal�rio: \n");
	scanf("%f",&salario);
	if(salario>0 && salario<500){
		novo_salario=salario*1.15;
	}else
		if(salario>=500 && salario<=1.000){
			novo_salario=salario*1.10;
		}else if(salario>=1.000){
			novo_salario=salario*1.05;
		}else
			printf("Sal�rio Invalido!\n");
	printf("O Novo sal�rio �: %.2f\n",novo_salario);		
	system("Pause");
	return 0;
}

