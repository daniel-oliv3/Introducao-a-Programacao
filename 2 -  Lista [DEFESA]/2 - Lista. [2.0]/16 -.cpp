#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//16 - Faça um algoritmo que receba o código correspondente ao cargo de um funcionário e seu salário atual e
//mostre o cargo, o valor do aumento e seu novo salário. Os cargos estão na tabela a seguir.

int main()
{
	setlocale(LC_ALL, "portuguese");
	float s, au;
	int c;
	printf("Tabela de Cargos [Informe o Codigo]\n");
	printf("[1] - Escriturário.\n");
	printf("[2] - Secretário.\n");
	printf("[3] - Caixa.\n");
	printf("[4] - Gerente.\n");
	printf("[5] - Diretor.\n");
	scanf("%d",&c);
	printf("Informe o salário atual: \n");
	scanf("%f",&s);
	if(c==1){
		au = s*0.50;
		printf("O cargo escolhido foi: ESCRITURÁRIO.\n");
			printf("O valor do aumento é: %.2f\n",au);
			printf("O novo salário é: %.2f\n",s+au);
	}else{
		if(c==2){
			au = s*0.35;
			printf("O cargo escolhido foi: SECRETÁRIO.\n");
			printf("O valor do aumento é: %.2f\n",au);
			printf("O novo salário é: %.2f\n",s+au);
		}else{
			if(c==3){
				au = s*0.20;
				printf("O cargo escolhido foi: CAIXA.\n");
				printf("O valor do aumento é: %.2f\n",au);
				printf("O novo salário é: %.2f\n",s+au);
			}else{
				if(c==4){
					au = s*0.10;
					printf("O cargo escolhido foi: GERENTE.\n");
					printf("O valor do aumento é: %.2f\n",au);
					printf("O novo salário é: %.2f\n",s+au);
				}else{
					if(c==5){
						printf("O cargo escolhido foi: DIRETOR.\n");
						printf("Não tem Aumento!\n");
						printf("O valor do aumento é: %.2f\n",au);
					}else
						printf("O número tem que estar entre 1 e 5\n");
				}
			}
		}
	}
	system("Pause");
	return 0;
}

