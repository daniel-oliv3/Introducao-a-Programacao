#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// 12 – Leia o número de um funcionário, seu número de horas
//trabalhadas, o valor que recebe por hora e calcule o salário desse
//funcionário. A seguir, mostre o número e o salário do funcionário.

int main()
{
	setlocale(LC_ALL, "portuguese");
	float sal, ht, vrh, r;
	printf("Informe o seu salário: \n");
	scanf("%f",&sal);
	printf("Informe o seu número de horas trabalhadas: \n");
	scanf("%f",&ht);
	printf("Informe o valor por hora: \n");
	scanf("%f",&vrh);	
	
	
	system("Pause");
	return 0;
}

