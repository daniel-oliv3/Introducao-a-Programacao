#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

// 2. Fazer um algoritmo que leia o percurso em quilômetros, o tipo de carro e informe o consumo estimado de
//combustível, sabendo-se que um carro tipo C faz 12 km com um litro de gasolina, um tipo B faz 9 km e o
//tipo A, 8 km por litro.

int main()
{
	setlocale(LC_ALL, "portuguese");
	float a, b, c, km, r;
	char tp[5];
	printf("Informe o Tipo de Carro: [A][B][C]\n");
	scanf("%c",&tp);
	printf("Informe o percurso em quilômetros: \n");
	scanf("%f",&km);
	if(!strcmp(tp, "a") || !strcmp(tp, "A")){
			r = km*0.12;
			printf("O consumo foi de: %.2f Litros\n",r);
	}else{
		if(!strcmp(tp, "a") || !strcmp(tp, "A")){
			r = km*0.09;
			printf("O consumo foi de: %.2f Litros\n",r);
		}else{
			if(!strcmp(tp, "c") || !strcmp(tp, "C")){
				r = km*0.08;
				printf("O consumo foi de: %.2f Litros\n",r);
			}else
				printf("Tipo Invalido!\n");
		}
		
	}
	system("Pause");
	return 0;
}



