/* Fa�a um algoritmo que receba o sal�rio bruto de um funcion�rio e, usando a tabela a seguir, calcule e
mostre o valor a receber. Sabe-se que este � composto pelo sal�rio bruto acrescido de gratifica��o e
descontado o imposto de 7% sobre o sal�rio: */

#include <stdio.h>
#include <conio.h>
int main(){
	float salb, nsal=0,grat,desc;
	printf("Salario: ");
	scanf("%f", &salb);
	grat = salb * 0.3;
	desc = salb * 0.07;
	if (salb >= 0 && salb <= 350){
		nsal = salb + grat - desc;
	} else
		if (salb > 350 && salb <= 600){
			nsal = salb + grat - desc;
		} else
			if (salb > 350 && salb <= 600){
				nsal = salb + grat - desc;
			} else
				if (salb > 600 && salb <= 950){
					nsal = salb + grat - desc;
				} else
					if (salb > 950){
						nsal = salb + grat - desc;
					}
	printf("Novo salario; %.2f",nsal);
	getch();
	return 0;
}

