#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//14. Um hotel deseja fazer uma promo��o especial para de final de semana, concedendo um desconto de 25% na
//di�ria. Sendo informados, pelo usu�rio, o n�mero de apartamentos do hotel e o valor da di�ria por
//apartamento para o final de semana completo. Elabore um algoritmo para calcular:
//a) Valor promocional da di�ria
//b) Valor total a ser arrecadado caso a ocupa��o neste final de semana atinja 100%;



int main()
{
	setlocale(LC_ALL, "portuguese");
	float diaria, ap, pro, total;
	
	printf("Informe o valor da di�ria: \n");
	scanf("%f",&diaria);
	printf("Informe o n�mero de apartamentos: \n");
	scanf("%f",&ap);
	pro = diaria*0.75;
	total = diaria*ap*2;
	printf("O valor da di�ria promocional �: %.2f\n",pro);
	printf("O total arrecadado com 100%% de ocupa��o �: %.2f\n",total);

	system("pause");
	return 0;
	
}
