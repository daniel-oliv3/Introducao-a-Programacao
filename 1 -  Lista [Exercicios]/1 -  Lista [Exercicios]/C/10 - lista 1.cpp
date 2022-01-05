#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//10. Faça um programa que receba o salário de um funcionário e o percentual de aumento, calcule e mostre o
//valor do aumento e o novo salário:


int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	 float salario, aumento, salarioFinal;
     
     printf ("Informe o seu salario: ");
     scanf ("%f", &salario);
     printf ("Informe o seu aumento, em porcentagem: ");
     scanf ("%f", &aumento);
     salarioFinal=(salario*(aumento/100))+salario;
     printf ("O salario final acrescido do aumento e: %.2f\n", salarioFinal);
	system("pause");
	return 0;

}
