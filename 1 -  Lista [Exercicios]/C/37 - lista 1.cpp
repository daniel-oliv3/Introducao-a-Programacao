#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//37. Faça um algoritmo que calcule a quantidade de litros de combustível gasta em uma viagem, utilizando um
//automóvel que faz 12Km por litro. Para obter o cálculo, o usuário deve fornecer o tempo gasto na viagem e
//a velocidade média durante ela. Desta forma, será possível obter a distância percorrida com a fórmula
//DISTANCIA = TEMPO * VELOCIDADE. Tendo o valor da distância, basta calcular a quantidade de litros
//de combustível utilizada na viagem. O algoritmo deve apresentar os valores da velocidade média, tempo
//gasto na viagem, a distância percorrida e a quantidade de litros utilizada na viagem:

int main()
{
	setlocale(LC_ALL, "portuguese");
	float litros, distancia, tempo, velocidade, result;
	
	printf("Informe a quantidade de litros gasto na viagem: \n");
	scanf("%f",&litros);
	printf("Informe o tempo gasto na viagem: \n");
	scanf("%f",&tempo);
	printf("Informe a velocidade média: \n");
	scanf("%f",&velocidade);
	
	distancia = tempo*velocidade;
	result = distancia/12;
	printf("A quantidade de litros gasto na viagem é: %.2f\n",result);
	
	system("pause");
	return 0;
	
	
	
	
}
