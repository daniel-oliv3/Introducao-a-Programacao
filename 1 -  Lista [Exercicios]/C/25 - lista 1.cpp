#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//25. Uma sorveteria vende tr�s tipos de picol�s. Sabendo-se que o picol� do tipo 1 � vendido por R$ 1,10, o
//picol� do tipo 2 por R$ 1,25 e o picol� do tipo 3 por R$ 0,80. Fa�a um algoritmo que, para cada tipo de
//picol�, mostre a quantidade vendida e o total arrecadado de todas as vendas:



int main()
{
	setlocale(LC_ALL, "portuguese");
	float t1, t2, t3, r1, r2, r3, total;
	
	printf("Informe a quantidade de picol� do tipo 1 (R$1,10)\n");
	scanf("%f",&t1);
	printf("Informe a quantidade de picol� do tipo 2 (R$1,25)\n");
	scanf("%f",&t2);
	printf("Informe a quantidade de picol� do tipo 3 (R$0,80)\n");
	scanf("%f",&t3);
	r1 = t1*1.10;
	r2 = t2*1.25;
	r3 = t3*0.80;
	total = r1+r2+r3;
	printf("O total arrecadado de picol� do tipo 1 �: %.2f\n",r1);
	printf("O total arrecadado de picol� do tipo 2 �: %.2f\n",r2);
	printf("O total arrecadado de picol� do tipo 3 �: %.2f\n",r3);
	printf("O total arrecadado de todas as vendas �: %.2f\n",total);	
	system("pause");
	return 0;
}
