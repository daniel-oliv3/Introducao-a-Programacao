#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// 7. Criar um algoritmo que leia o salário de uma e imprimir o desconto do INSS segundo os dados abaixo:
//- menor ou igual a R$ 600  isento;
//- maior que R$ 600 e menor ou igual que R$ 1.200 = 20%
//- maior que R$ 1.200 e menor ou igual a 2.000 = 25%
//- maior que R$ 2.000 = 30%

int main()
{
	setlocale(LC_ALL, "portuguese");
	float s, d;
	printf("Informe o salário: \n");
	scanf("%f",&s);
	if(s <= 600){
		printf("Isento!\n");
	}
	else{
		if(s > 600 && s <= 1200){
			d = s-(s*0.20);
			printf("Desconto de 20%% do INSS é: %.2f\n",d);
		}
		else{
			if(s > 1200 && s <= 2000){
				d = s-(s*0.25);
 				printf("Desconto de 25%% do INSS é: %.2f\n",d);
			}
			else{
				if(s > 2000){
					d = s-(s*0.30);
					printf("Desconto de 30%% do INSS é: %.2f\n",d);
				}
			}
		}
	
}
system("pause");
return 0;
}
