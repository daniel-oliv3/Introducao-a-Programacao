#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//27. Considerando que, para um consórcio, sabe-se o número total de prestações, a quantidade de prestações
//pagas e o valor atual da prestação, escreva um algoritmo que determine o total pago pelo consorciado e o
//saldo devedor:



int main()
{
	setlocale(LC_ALL, "portuguese");
	int tps, qtp;
	float vp, tpr, sd;
	printf("Informe o total das prestações: \n");
	scanf("%d",&tps);
	printf("Informe a quantidade de prestações pagas: \n");
	scanf("%d",&qtp);
	printf("Informe o valor da prestação: \n");
	scanf("%f",&vp);
	tpr = qtp*vp;
	sd = vp*(tps-qtp);
	printf("O total a pagar é: %f\n",tpr);
	printf("O saldo devedor é: %f\n",sd);
	
	
	system("pause");
	return 0;
	
}
