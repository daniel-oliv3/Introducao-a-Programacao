#include<stdio.h>
#include<stdlib.h>
#include<locale.h> 

// 31. Sabendo-se que: 1 p� = 12 polegadas; 1 jarda = 3 p�s; 1 milha = 1,760 jardas. Fa�a um algoritmo que receba
//uma medida em p�s, fa�a as convers�es a seguir e mostre os resultados:
//a) Polegadas
//b) Jardas
//c) Milhas


int main()
{
	setlocale(LC_ALL, "portuguese");
	float pes, polegadas, jardas, milhas;
	
	printf("Informe a quantidade de p�s a ser convertidos: \n");
	scanf("%f",&pes);
	polegadas = pes*12;
	jardas = pes/3;
	milhas = pes/1760;
	printf("Polegadas: %.2f\n",polegadas);
	printf("Jardas: %.2f\n",jardas);
	printf("Milhas: %.2f\n",milhas);
	
	system("pause");
	return 0;
	
}
