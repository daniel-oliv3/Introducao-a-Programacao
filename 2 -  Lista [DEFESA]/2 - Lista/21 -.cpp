#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//21 - O pre�o ao consumidor de um carro novo � a soma do custo de f�brica com a porcentagem do distribuidor
//e dos impostos, ambos aplicados ao custo de f�brica. As porcentagens encontram-se na tabela a seguir.
//Fa�a um algoritmo que receba o custo de f�brica de um carro e mostre o pre�o ao consumidor

int main()
{
	setlocale(LC_ALL, "portuguese");
	float custo_fab, perc_dist, perc_imp, dist, imp, preco;
	printf("Informe o Custo de fabrica��o: \n");
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
	printf("O pre�o ao consumidor �: %.2f\n",preco);
	system("Pause");
	return 0;
}

