/* Fazer um algoritmo que leia o percurso em quilômetros, o tipo de carro e informe o consumo estimado de
combustível, sabendo-se que um carro tipo C faz 12 km com um litro de gasolina, um tipo B faz 9 km e o
tipo A, 8 km por litro. */

#include <stdio.h>
#include <conio.h>
int main(){
	char tipo;
	float km, cons = 0;
	printf("Tipo do carro - A, B ou C: ");
	scanf("%c", &tipo);
	if (tipo == 'a' || tipo == 'b' || tipo == 'c') {
		printf("Percurso em quilometros: ");
		scanf("%f", &km);
		if (tipo == 'a'){
			cons = km / 8;		
		} else if (tipo == 'b'){
			cons = km / 9;	
		} else if (tipo == 'c'){
			cons = km / 12;	
		}	
		printf("Consumo estimado: %.2f litros.",cons);
	} else
		printf("Tipo invalido!");
	getch();
	return 0;
}

