#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

//4. Chico tem 1,50m e cresce 2 cent�metros por ano, enquanto Juca tem 1,10m e cresce 3 cent�metros por ano.
//Construir um algoritmo que calcule e imprima quantos anos ser�o necess�rios para que Juca seja maior que Chico:

int main()
{
	setlocale(LC_ALL, "portuguese");
	int anos;
	float chico, juca;
	system("color 1F");
	printf("..............................................................................................................\n");
	printf("4. Chico tem 1,50m e cresce 2 cent�metros por ano, enquanto Juca tem 1,10m e cresce 3 cent�metros por ano.\n");
	printf("Construir um algoritmo que calcule e imprima quantos anos ser�o necess�rios para que Juca seja maior que Chico:\n");
	printf("..............................................................................................................\n\n");
	chico=1.5;
	juca=1.1;
	anos=0;
	do{
		chico=chico+0.02; //2 centimetros
		juca=juca+0.03; 
		anos++;
	}while(juca<=chico);
	printf("  Ser�o necess�rios %d Anos para que Juca seja maior que Chico\n\n",anos);
	system("Pause");
	return 0;
}

