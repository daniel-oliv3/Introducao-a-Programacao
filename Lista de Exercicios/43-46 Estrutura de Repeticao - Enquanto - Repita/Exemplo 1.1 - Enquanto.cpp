#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*  1.1 - Escreva um algoritmo que leia os números maiores
que 0 enquanto a sua soma não ultrapasse 10,
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
	printf("%d\n",soma); // fora do laço
	system("Pause");
	return 0;
}

/**/
