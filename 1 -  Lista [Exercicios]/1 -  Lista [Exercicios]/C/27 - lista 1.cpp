#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//27. Considerando que, para um cons�rcio, sabe-se o n�mero total de presta��es, a quantidade de presta��es
//pagas e o valor atual da presta��o, escreva um algoritmo que determine o total pago pelo consorciado e o
//saldo devedor:



int main()
{
	setlocale(LC_ALL, "portuguese");
	int tps, qtp;
	float vp, tpr, sd;
	printf("Informe o total das presta��es: \n");
	scanf("%d",&tps);
	printf("Informe a quantidade de presta��es pagas: \n");
	scanf("%d",&qtp);
	printf("Informe o valor da presta��o: \n");
	scanf("%f",&vp);
	tpr = qtp*vp;
	sd = vp*(tps-qtp);
	printf("O total a pagar �: %f\n",tpr);
	printf("O saldo devedor �: %f\n",sd);
	
	
	system("pause");
	return 0;
	
}
