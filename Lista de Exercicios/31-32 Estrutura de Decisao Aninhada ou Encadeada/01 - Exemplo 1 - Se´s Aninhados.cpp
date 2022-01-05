#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//Exemplo 1 - Se´s Aninhados

int main()
{
	setlocale(LC_ALL, "portuguese");
	float novo_salario=0, salario;
	printf("Informe o salário: \n");
	scanf("%f",&salario);
	if(salario>0 && salario<500){
		novo_salario=salario*1.15;
		printf("O novo salário é: %.2f\n",novo_salario);
	}else
		if(salario<=1.000){
			novo_salario=salario*1.10;
			printf("O novo salário é: %.2f\n",novo_salario);
		}else{
			novo_salario=salario*1.05;
			printf("O novo salário é: %.2f\n",novo_salario);
		}
	system("Pause");
	return 0;
}

