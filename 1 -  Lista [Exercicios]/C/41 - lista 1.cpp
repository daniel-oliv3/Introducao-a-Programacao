#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//41. Para v�rios tributos, a base de c�lculo � o sal�rio m�nimo. Fazer um algoritmo que leia o valor do sal�rio
//m�nimo e o valor do sal�rio de uma pessoa. Calcular e exibir quantos sal�rios m�nimos esta pessoa ganha:


int main()
{
	setlocale(LC_ALL, "portuguese");
	float salario, minimo, total;
	
	printf("Informe o valor do sal�rio minimo: \n");
	scanf("%f",&minimo);
	printf("Informe o valor do seu sal�rio: \n");
	scanf("%f",&salario);
	total = salario/minimo;
	printf("Voc� recebe: %.2f sal�rios minimos.\n",total);
	
	system("pause");
	return 0;
	
	
	
	
}
