/* Uma empresa decidiu dar uma gratificação de Natal a seus funcionários, baseada no número de horas
extras e no número de horas que o funcionário faltou ao trabalho. O valor do prêmio é obtido pela consulta
à tabela que se segue, na qual:
H = número de horas extras – ( 2/3 * número de horas faltas ) */

#include <stdio.h>
#include <conio.h>
int main(){
	float he,hf,h;
	printf("Horas trabalhadas:");
	scanf("%f",&he);
	printf("Horas Faltas:");
	scanf("%f",&hf);
	h = (he - (hf * 2/3))*60;
	if (h < 600){
		printf("Premio: R$100");
	} else if (h >= 600 && h < 1200){
		printf("Premio: R$200");
	} else if (h >= 1200 && h < 1800){
		printf("Premio: R$300");
	} else if (h >= 1800 && h < 2400){
		printf("Premio: R$400");
	} else if (h >= 2400) {
		printf("Premio: R$500");
	}
	getch();
	return 0;
}

