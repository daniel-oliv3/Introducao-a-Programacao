#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//40. Uma f�brica de camisetas produz os tamanhos pequeno, m�dio e grande, cada uma sendo vendida
//respectivamente por 10, 12 e 15 reais. Construa um algoritmo em que o usu�rio forne�a a quantidade de
//camisetas pequenas, m�dias e grandes referentes a uma venda, e a m�quina informe quanto ser� o valor
//arrecadado:


int main()
{
	setlocale(LC_ALL, "portuguese");
	float p, m, g, p1, m1, g1, valort;
	
	printf("Informe a quantidade de camiseta do tipo (P) pequeno: \n");
	scanf("%f",&p);
	printf("Informe a quantidade de camiseta do tipo (M) pequeno: \n");
	scanf("%f",&m);
	printf("Informe a quantidade de camiseta do tipo (G) pequeno: \n");
	scanf("%f",&g);
	p1 = p*10;
	m1 = m*12;
	g1 = g*15;
	valort = p1+m1+g1;
	
	printf("O valor total da compra �: %.2f\n",valort);
	
	
	system("pause");
	return 0;
}
