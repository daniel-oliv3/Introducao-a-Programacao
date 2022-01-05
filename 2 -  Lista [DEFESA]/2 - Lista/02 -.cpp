#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// 2. Fazer um algoritmo que leia o percurso em quilômetros, o tipo de carro e informe o consumo estimado de
//combustível, sabendo-se que um carro tipo C faz 12 km com um litro de gasolina, um tipo B faz 9 km e o
//tipo A, 8 km por litro.

int main()
{
	setlocale(LC_ALL, "portuguese");
	float a, b, c, km, r;
	int tp;
	printf("Informe o Tipo de Carro: [A][B][C]\n");
	scanf("%c",&tp);
	printf("Informe o percurso em quilômetros: \n");
	scanf("%f",&km);
	switch(tp){
		case 'a':
			r = km*0.12;
			printf("O consumo foi de: %.2f Litros\n",r);
			break;
		case 'b':
			r = km*0.09;
			printf("O consumo foi de: %.2f Litros\n",r);
			break;	
		case 'c':
			r = km*0.08;
			printf("O consumo foi de: %.2f Litros\n",r);
			break;
	}
	system("Pause");
	return 0;
}

