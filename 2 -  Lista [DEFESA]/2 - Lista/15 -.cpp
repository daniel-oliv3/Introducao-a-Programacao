#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//15. Um banco conceder� cr�dito especial aos seus clientes, de acordo com o sal�rio m�dio no �ltimo ano. Fa�a
//um algoritmo que receba o saldo m�dio de um cliente e calcule o valor do cr�dito, de acordo com a tabela a
//seguir. Mostre o saldo m�dio e o valor do cr�dito:

int main()
{
	setlocale(LC_ALL, "portuguese");
	float m, c;
	printf("Informe a m�dia do saldo: \n");
	scanf("%f",&m);
	if(m > 400){
		c = m*0.30;
		printf("30%% do Saldo M�dio.\n");
	}else{
		if(m > 300 && m <= 400){
			c = m*0.25;
			printf("25%% do Saldo M�dio.\n");
		}else{
			if(m > 200 && m <= 300){
				c = m*0.20;
				printf("20%% do Saldo M�dio.\n");
			}else{
				if(m <= 200){
					c = m*0.10;
					printf("10%% do Saldo M�dio.\n");
				}
			}
		}
	}
	printf("O sal�rio m�dio �: %.2f \nO valor do cr�dito �: %.2f\n",m,c);	
	system("Pause");
	return 0;
}

