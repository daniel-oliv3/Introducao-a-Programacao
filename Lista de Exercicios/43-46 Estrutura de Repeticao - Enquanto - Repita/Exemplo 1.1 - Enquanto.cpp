#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*  1.1 - Escreva um algoritmo que leia os n�meros maiores
que 0 enquanto a sua soma n�o ultrapasse 10,
escreva a soma:;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int soma, num;
	num=1;
	soma=num;
	while(soma<10){
		num=num+1;
		soma=soma+num;
	}
	printf("%d\n",soma); // fora do la�o
	system("Pause");
	return 0;
}

/**/
