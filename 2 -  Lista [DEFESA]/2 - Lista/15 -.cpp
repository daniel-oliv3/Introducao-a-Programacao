#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//15. Um banco concederá crédito especial aos seus clientes, de acordo com o salário médio no último ano. Faça
//um algoritmo que receba o saldo médio de um cliente e calcule o valor do crédito, de acordo com a tabela a
//seguir. Mostre o saldo médio e o valor do crédito:

int main()
{
	setlocale(LC_ALL, "portuguese");
	float m, c;
	printf("Informe a média do saldo: \n");
	scanf("%f",&m);
	if(m > 400){
		c = m*0.30;
		printf("30%% do Saldo Médio.\n");
	}else{
		if(m > 300 && m <= 400){
			c = m*0.25;
			printf("25%% do Saldo Médio.\n");
		}else{
			if(m > 200 && m <= 300){
				c = m*0.20;
				printf("20%% do Saldo Médio.\n");
			}else{
				if(m <= 200){
					c = m*0.10;
					printf("10%% do Saldo Médio.\n");
				}
			}
		}
	}
	printf("O salário médio é: %.2f \nO valor do crédito é: %.2f\n",m,c);	
	system("Pause");
	return 0;
}

