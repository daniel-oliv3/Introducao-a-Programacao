#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//23. Criar um algoritmo que informe qual quantidade de dinheiro gasta por uma pessoa ao fazer tr�s viagens
//percorrendo cada continente (Am�rica, Europa e �frica), a pessoa dever� informar um pa�s de cada
//continente que deseja visitar, no final informe quanto essa pessoa gastou

int main()
{
	setlocale(LC_ALL, "portuguese");
	int c1, c2, c3; 
	float v1, v2, v3, r;
	printf("Informe um pa�s da [AM�RICA]: \n");
	printf("[1] - Canad� [R$ 1.970,00]\n");
	printf("[2] - El Salvador [R$ 1.840,00]\n");
	printf("[3] - Brasil [R$ 1.360,00]\n");
	printf("[4] - M�xico [R$ 1.480,00]\n");
	scanf("%d",&c1);
	switch(c1){
		case 1:
			v1 = 197000;
			break;
		case 2:
			v1 = 184000;
			break;
		case 3:
			v1 = 136000;
			break;
		case 4:
			v1 = 148000;
			break;
		default:
			printf("N�mero Invalido!\n");		
	}
	printf("Informe um pa�s da [EUROPA]: \n");
	printf("[1] - It�lia [R$ 2.130,00]\n");
	printf("[2] - Portugal [R$ 1.950,00]\n");
	printf("[3] - Fran�a [R$ 2.320,00]\n");
	printf("[4] - Vaticano [R$ 2.470,00]\n");
	scanf("%d",&c2);
	switch(c2){
		case 1:
			v2 = 213000;
			break;
		case 2:
			v2 = 196500;
			break;
		case 3:
			v2 = 232000;
			break;
		case 4:
			v2 = 247000;
			break;
		default:
			printf("N�mero Invalido!\n");		
	}
	printf("Informe um pa�s da [�FRICA]: \n");
	printf("[1] - �frica do Sul [R$ 1.780,00]\n");
	printf("[2] - Camar�es [R$ 2.045,00]\n");
	printf("[3] - Marrocos [R$ 1.980,00]\n");
	printf("[4] - Tanz�nia [R$ 2.090,00]\n");
	scanf("%d",&c3);      
	switch(c2){
		case 1:
			v3 = 178000;
			break;
		case 2:
			v3 = 204500;
			break;
		case 3:
			v3 = 198000;
			break;
		case 4:
			v3 = 209000;
			break;
		default:
			printf("N�mero Invalido!\n");		
	}
	r = v1+v2+v3;
	printf("O total gasto com as tr�s viagens �: %.2f\n",r);
	system("Pause");
	return 0;
}

