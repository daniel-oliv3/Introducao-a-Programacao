/* Uma empresa decidiu dar uma gratifica��o de Natal a seus funcion�rios, baseada no n�mero de horas
extras e no n�mero de horas que o funcion�rio faltou ao trabalho. O valor do pr�mio � obtido pela consulta
� tabela que se segue, na qual:
H = n�mero de horas extras � ( 2/3 * n�mero de horas faltas ) */

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

