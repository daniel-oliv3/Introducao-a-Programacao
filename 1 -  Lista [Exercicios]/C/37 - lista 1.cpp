#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//37. Fa�a um algoritmo que calcule a quantidade de litros de combust�vel gasta em uma viagem, utilizando um
//autom�vel que faz 12Km por litro. Para obter o c�lculo, o usu�rio deve fornecer o tempo gasto na viagem e
//a velocidade m�dia durante ela. Desta forma, ser� poss�vel obter a dist�ncia percorrida com a f�rmula
//DISTANCIA = TEMPO * VELOCIDADE. Tendo o valor da dist�ncia, basta calcular a quantidade de litros
//de combust�vel utilizada na viagem. O algoritmo deve apresentar os valores da velocidade m�dia, tempo
//gasto na viagem, a dist�ncia percorrida e a quantidade de litros utilizada na viagem:

int main()
{
	setlocale(LC_ALL, "portuguese");
	float litros, distancia, tempo, velocidade, result;
	
	printf("Informe a quantidade de litros gasto na viagem: \n");
	scanf("%f",&litros);
	printf("Informe o tempo gasto na viagem: \n");
	scanf("%f",&tempo);
	printf("Informe a velocidade m�dia: \n");
	scanf("%f",&velocidade);
	
	distancia = tempo*velocidade;
	result = distancia/12;
	printf("A quantidade de litros gasto na viagem �: %.2f\n",result);
	
	system("pause");
	return 0;
	
	
	
	
}
