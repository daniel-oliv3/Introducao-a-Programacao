#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//5. Fa�a um programa que receba tr�s notas e seus respectivos pesos, calcule e mostre a m�dia ponderada:

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	float n1, n2, n3, m;
	
	printf("Digite a Primeira Nota: ");
	scanf("%f",&n1);
	printf("Digite a Segunda Nota: ");
	scanf("%f",&n2);
	printf("Digite a Terceira Nota: ");
	scanf("%f",&n3);
	m = (n1+n2+n3)/3;
	printf("A M�dia �: %f\n",m);
	
system("pause");
return 0;	
}
