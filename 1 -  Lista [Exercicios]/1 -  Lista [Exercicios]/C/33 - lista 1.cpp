#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//33. Saymon comprou um saco de ra��o com peso em quilos. Ele possui dois gatos, para os quais fornece a
//quantidade de ra��o em gramas. A quantidade di�ria de ra��o fornecida para cada gato � sempre a mesma.
//Fa�a um algoritmo que receba o peso do saco de ra��o e a quantidade de ra��o fornecida para cada gato,
//calcule e mostre quanto restar� de ra��o no saco ap�s seis dias:



int main()
{
	setlocale(LC_ALL, "portuguese");
	
	float pesoracao, cat1, cat2, m, pm, d;
	
	printf("Informe o peso da ra��o em Kg: \n");
	scanf("%f",&pesoracao);
	printf("Informe a quantidade de ra��o fornecida para o gato 1 em gramas: \n");
	scanf("%f",&cat1);
	printf("Informe a quantidade de ra��o fornecida para o gato 2 em gramas: \n");
	scanf("%f",&cat2);
	m = (cat1*6)+(cat2*6);  // multiplica quantidade de ra��o fornecida por 6, 6 dias
	pm = pesoracao*1000;  // trasforma peso em gramas
	d = pm-m;  // subtrai gramas por multiplica��o do resultado dos 2 gatos
	printf("Ap�s seis dias ainda restou %f de ra��o no saco: \n",d/1000);
	system("pause");
	return 0;
}
