#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// 12 � Fa�a um algoritmo que leia 4 vari�veis A,B,C e D. A seguir, calcule
//e mostre a diferen�a do produto de A e B pelo produto de C e D.
//F�rmula da diferen�a do produto (A*B)-(C*D).

int main()
{
	setlocale(LC_ALL, "portuguese");
	int a, b, c, d, r;
	printf("Informe o primeiro valor: \n");
	scanf("%d",&a);
	printf("Informe o segundo valor: \n");
	scanf("%d",&b);
	printf("Informe o terceiro valor: \n");
	scanf("%d",&c);
	printf("Informe o quarto valor: \n");
	scanf("%d",&d);
	r = (a*b)-(c*d);
	printf("A diferen�a do produto de A e B pelo produto de C e D �: %d\n",r);
	system("Pause");
	return 0;
}

