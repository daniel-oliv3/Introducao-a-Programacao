#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// 14 � Leia a base e a altura de um c�modo. Calcule e mostre a
//�rea desse c�modo sabendo que a �rea=base * altura.

int main()
{
	setlocale(LC_ALL, "portuguese");
	float base, altura, area;
	printf("Informe a base de um c�modo: \n");
	scanf("%f",&base);
	printf("Informe a altura de um c�modo: \n");
	scanf("%f",&altura);
	area = base*altura;
	printf("A �rea desse c�modo �: %.2f\n",area);	
	system("Pause");
	return 0;
}

