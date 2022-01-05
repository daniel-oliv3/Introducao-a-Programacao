#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//18. Uma empresa decidiu dar uma gratificação de Natal a seus funcionários, baseada no número de horas
//extras e no número de horas que o funcionário faltou ao trabalho. O valor do prêmio é obtido pela consulta
//à tabela que se segue, na qual:
//H = número de horas extras – ( 2/3 * número de horas faltas )

int main()
{
	setlocale(LC_ALL, "portuguese");
	float h, nht, nhf;
	printf("Informe o número de horas extras trabalhadas: \n");
	scanf("%f",&nht);
	printf("Informe o número de horas não trabalhadas: \n");
	scanf("%f",&nhf);
	h = nht-(2/3*nhf);
	if(h >= 2400){
		printf("O valor do prêmio de R$ 500,00\n");
	}else{
		if(h > 1800 && h < 2400){
			printf("O valor do prêmio de R$ 400,00\n");
		}else{
			if(h >= 1200 && h <= 1800){
				printf("O valor prêmio de R$ 300,00\n");
			}else{
				if(h >= 600 && h < 1200){
					printf("O valor do prêmio de R$ 200,00\n");
				}else{
					if(h < 600){
						printf("O valor do prêmio de R$ 100,00\n");
					}
				}
			}
		}
	}	
	system("Pause");
	return 0;
}

