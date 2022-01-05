#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//21 - O preço ao consumidor de um carro novo é a soma do custo de fábrica com a porcentagem do distribuidor
//e dos impostos, ambos aplicados ao custo de fábrica. As porcentagens encontram-se na tabela a seguir.
//Faça um algoritmo que receba o custo de fábrica de um carro e mostre o preço ao consumidor

int main()
{
	setlocale(LC_ALL, "portuguese");
	float custo_fab, perc_dist, perc_imp, dist, imp, preco;
	printf("Informe o Custo de fabricação: \n");
	scanf("%f",&custo_fab);
	if(custo_fab < 12000){
		perc_dist = 5;
		perc_imp = 0;
	}else{
		if(custo_fab < 25000){
			perc_dist = 10;
			perc_imp = 15;
		}else
			perc_dist = 15;
			perc_imp = 20;		
	}
	dist = custo_fab*perc_dist/100;
	imp = custo_fab*perc_imp/100;
	preco = custo_fab+dist+imp;
	printf("O preço ao consumidor é: %.2f\n",preco);
	system("Pause");
	return 0;
}

