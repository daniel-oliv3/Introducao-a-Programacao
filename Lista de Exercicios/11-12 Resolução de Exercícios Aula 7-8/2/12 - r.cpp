#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// 12 � Leia o n�mero de um funcion�rio, seu n�mero de horas
//trabalhadas, o valor que recebe por hora e calcule o sal�rio desse
//funcion�rio. A seguir, mostre o n�mero e o sal�rio do funcion�rio.

int main()
{
	setlocale(LC_ALL, "portuguese");
	float sal, ht, vrh, r;
	printf("Informe o seu sal�rio: \n");
	scanf("%f",&sal);
	printf("Informe o seu n�mero de horas trabalhadas: \n");
	scanf("%f",&ht);
	printf("Informe o valor por hora: \n");
	scanf("%f",&vrh);	
	
	
	system("Pause");
	return 0;
}

