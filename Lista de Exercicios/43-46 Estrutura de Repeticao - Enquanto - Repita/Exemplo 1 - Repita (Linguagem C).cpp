#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* Escreva um algoritmo que leia os números maiores
que 3 enquanto a sua soma não ultrapasse 20,
escreva a soma:
;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int soma, num;
	num=4; soma=num;
	do{
		printf("%d\n",soma);
		num=num+1;
		soma=soma+num;
	}while(soma<20);
	printf("\n");
	system("Pause");
	return 0;
}

/**/
