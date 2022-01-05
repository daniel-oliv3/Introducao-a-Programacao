#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//33. Saymon comprou um saco de ração com peso em quilos. Ele possui dois gatos, para os quais fornece a
//quantidade de ração em gramas. A quantidade diária de ração fornecida para cada gato é sempre a mesma.
//Faça um algoritmo que receba o peso do saco de ração e a quantidade de ração fornecida para cada gato,
//calcule e mostre quanto restará de ração no saco após seis dias:



int main()
{
	setlocale(LC_ALL, "portuguese");
	
	float pesoracao, cat1, cat2, m, pm, d;
	
	printf("Informe o peso da ração em Kg: \n");
	scanf("%f",&pesoracao);
	printf("Informe a quantidade de ração fornecida para o gato 1 em gramas: \n");
	scanf("%f",&cat1);
	printf("Informe a quantidade de ração fornecida para o gato 2 em gramas: \n");
	scanf("%f",&cat2);
	m = (cat1*6)+(cat2*6);  // multiplica quantidade de ração fornecida por 6, 6 dias
	pm = pesoracao*1000;  // trasforma peso em gramas
	d = pm-m;  // subtrai gramas por multiplicação do resultado dos 2 gatos
	printf("Após seis dias ainda restou %f de ração no saco: \n",d/1000);
	system("pause");
	return 0;
}
