#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//14. Um hotel deseja fazer uma promoção especial para de final de semana, concedendo um desconto de 25% na
//diária. Sendo informados, pelo usuário, o número de apartamentos do hotel e o valor da diária por
//apartamento para o final de semana completo. Elabore um algoritmo para calcular:
//a) Valor promocional da diária
//b) Valor total a ser arrecadado caso a ocupação neste final de semana atinja 100%;



int main()
{
	setlocale(LC_ALL, "portuguese");
	float diaria, ap, pro, total;
	
	printf("Informe o valor da diária: \n");
	scanf("%f",&diaria);
	printf("Informe o número de apartamentos: \n");
	scanf("%f",&ap);
	pro = diaria*0.75;
	total = diaria*ap*2;
	printf("O valor da diária promocional é: %.2f\n",pro);
	printf("O total arrecadado com 100%% de ocupação é: %.2f\n",total);

	system("pause");
	return 0;
	
}
