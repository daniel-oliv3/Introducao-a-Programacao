#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// 13. Fa�a um algoritmo que receba o sal�rio bruto de um funcion�rio e, usando a tabela a seguir, calcule e
//mostre o valor a receber. Sabe-se que este � composto pelo sal�rio bruto acrescido de gratifica��o e
//descontado o imposto de 7% sobre o sal�rio:

int main()
{
	setlocale(LC_ALL, "portuguese");
	float salario, gratif, val_ir, val_rec;
	printf("Informe o sal�rio do funcion�rio: \n");
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
	printf("O valor a receber �: %.2f\n",val_rec);
	system("Pause");
	return 0;
}

