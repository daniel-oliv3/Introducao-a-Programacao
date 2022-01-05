/* Faça um algoritmo que receba o salário bruto de um funcionário e, usando a tabela a seguir, calcule e
mostre o valor a receber. Sabe-se que este é composto pelo salário bruto acrescido de gratificação e
descontado o imposto de 7% sobre o salário: */

#include <stdio.h>
#include <conio.h>
int main(){
	float salb, nsal=0;
	printf("Salario: ");
	scanf("%f", &salb);
	if (salb > 0 && salb < 350) {
		nsal = salb + (salb * 0.3) - (salb * 0.07);
	} else if (salb > 350 && salb < 600) {
		nsal = salb + (salb * 0.25) - (salb * 0.07);
	} else if (salb > 600 && salb < 950) {
		nsal = salb + (salb * 0.25) - (salb * 0.07);
	} else if (salb > 950) {
		nsal = salb + (salb * 0.15) - (salb * 0.07);
	}
	
	printf("Novo salario; %.2f",nsal);
	getch();
	return 0;
}

