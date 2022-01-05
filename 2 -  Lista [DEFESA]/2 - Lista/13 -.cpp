#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// 13. Faça um algoritmo que receba o salário bruto de um funcionário e, usando a tabela a seguir, calcule e
//mostre o valor a receber. Sabe-se que este é composto pelo salário bruto acrescido de gratificação e
//descontado o imposto de 7% sobre o salário:

int main()
{
	setlocale(LC_ALL, "portuguese");
	float salario, gratif, val_ir, val_rec;
	printf("Informe o salário do funcionário: \n");
	scanf("%f",&salario);
	if(salario < 350){
		gratif = 0.30;
	}else{
		if(salario <= 600){
			gratif =0.25;
		}else{
			if(salario <= 950){
				gratif = 0.20;
			}else{
				if(salario > 950){
					gratif = 0.15;
				}
			}
		}
	}
	val_ir = salario*0.07;
	val_rec = salario+gratif-val_ir;	
	printf("O valor a receber é: %.2f\n",val_rec);
	system("Pause");
	return 0;
}

