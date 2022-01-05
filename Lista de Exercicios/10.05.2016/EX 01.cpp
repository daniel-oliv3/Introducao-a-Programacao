#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// ex - 01 - escreva um algoritmo que leia os numeros maiores que 0 enquanto a sua soma não ultrapasse 10, escrever a soma;

int main()
{
	setlocale(LC_ALL, "portuguese");
	int soma, num;
	num=1;
	soma=num;
	while(soma < 10){
		printf("Soma: %d\n",soma);
		num=num+1;
		soma=soma+num;
	}
	system("Pause");
	return 0;
}

