#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// 01 - uma empresa vende o mesmo produto para diferentes estados. cada estado possui uma taxa diferente de imposto sobre o valor do produto.
//faça um algoritmo que o usuario entre com o valor e o estado de destino, retorne quanto sera o preço final do produto com imposto.
//estado   | MG  |  sp | RJ  | ms |
//imposto  |7%  | 12% | 15% | 8%  |

int main()
{
	setlocale(LC_ALL, "portuguese");
	float v, r;
	int x;
	printf("Informe um valor: \n");
	scanf("%f",&v);
	printf("Informe o Estado de Destino: \n");
	printf("[1] Estado: Minas Gerais\n");
	printf("[2] Estado: São Paulo\n");
	printf("[3] Estado: Rio de Janeiro\n");
	printf("[4] Estado: Mato Grosso do Sul\n");
	scanf("%d",&x);
	switch(x){
		case 1:
			r = (v+(v*(0.07)));
			printf("O preço final do produto é: %.2f\n",r);
			break;
		case 2:
			r = (v+(v*(0.12)));
			printf("O preço final do produto é: %.2f\n",r);
			break;
		case 3:
			r = (v+(v*(0.15)));
			printf("O preço final do produto é: %.2f\n",r);
			break;
		case 4:
			r = (v+(v*(0.08)));
			printf("O preço final do produto é: %.2f\n",r);
			break;
		default:
			printf("Número Invalido!\n");	
	}
	system("Pause");
	return 0;
}

