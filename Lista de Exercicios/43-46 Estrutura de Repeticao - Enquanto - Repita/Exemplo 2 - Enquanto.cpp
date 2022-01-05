#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* Escreva um algoritmo que leia os números menores
que 10 e informe quantos números existem até que
seja maior ou igual ao número 2, escreva a
quantidade:;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int quant, num;
	num=9; quant=0;
	while((num<10) && (num>=2)){
		quant=quant+1;
		num=num-1;
	}
	printf("  A quantidade de números é: %d\n",quant);
	system("Pause");
	return 0;
}

/**/
