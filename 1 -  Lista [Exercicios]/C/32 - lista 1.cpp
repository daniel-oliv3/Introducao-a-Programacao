#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// 32. Cada degrau de uma escada tem X de altura. Faça um algoritmo que receba a altura da escada e a altura em
//que uma determinada pessoa deseja alcançar subindo a escada, calcule e mostre quantos degraus ele deverá
//subir para atingir seu objetivo, sem se preocupar com a altura da pessoa. As medidas fornecidas da escada
//devem está em metros e a medida do degrau em centímetros:



int main()
{
	setlocale(LC_ALL, "portuguese");
	float dg, au, qnt;
	
	printf("Informe a altura do degrau: \n");
	scanf("%f",&dg);
	printf("Informe a altura que deseja chegar: \n");
	scanf("%f",&au);
	qnt = au/dg;
	printf("A quantidade de degraus necessario é: %f\n",qnt);
	system("pause");
	return 0;
	
	
}
