#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//18. Uma empresa decidiu dar uma gratifica��o de Natal a seus funcion�rios, baseada no n�mero de horas
//extras e no n�mero de horas que o funcion�rio faltou ao trabalho. O valor do pr�mio � obtido pela consulta
//� tabela que se segue, na qual:
//H = n�mero de horas extras � ( 2/3 * n�mero de horas faltas )

int main()
{
	setlocale(LC_ALL, "portuguese");
	float h, nht, nhf;
	printf("Informe o n�mero de horas extras trabalhadas: \n");
	scanf("%f",&nht);
	printf("Informe o n�mero de horas n�o trabalhadas: \n");
	scanf("%f",&nhf);
	h = nht-(2/3*nhf);
	if(h >= 2400){
		printf("O valor do pr�mio de R$ 500,00\n");
	}else{
		if(h > 1800 && h < 2400){
			printf("O valor do pr�mio de R$ 400,00\n");
		}else{
			if(h >= 1200 && h <= 1800){
				printf("O valor pr�mio de R$ 300,00\n");
			}else{
				if(h >= 600 && h < 1200){
					printf("O valor do pr�mio de R$ 200,00\n");
				}else{
					if(h < 600){
						printf("O valor do pr�mio de R$ 100,00\n");
					}
				}
			}
		}
	}	
	system("Pause");
	return 0;
}

