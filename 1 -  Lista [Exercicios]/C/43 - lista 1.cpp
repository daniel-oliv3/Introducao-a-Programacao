#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

//43. Construa um algoritmo que, tendo como dados de entrada dois pontos quaisquer no plano cartesiano,
//P(x1,y1) e P(x2,y2), escreva a distância entre eles. A fórmula que efetua tal cálculo é:

int main()
{
	setlocale(LC_ALL, "portuguese");
	float d, x1, x2, y1, y2;
	
	printf("Informe o valor de x1: \n");
	scanf("%f",&x1);
	printf("Informe o valor de y1: \n");
	scanf("%f",&y1);
	printf("Informe o valor de x2: \n");
	scanf("%f",&x2);
	printf("Informe o valor de y1: \n");
	scanf("%f",&y1);
	d = sqrt(pow(x2-x1,2)+pow(y2-y1,2));
	printf("A distancia entre os dois pontos é: %f\n",d);
	system("pause");
	return 0;
}
