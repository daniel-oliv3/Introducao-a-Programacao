#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

// repita - escrever um algoritmo que leia os n�meros maiores que 3 enquanto sua soma n�o utrapasse 20, escreva a soma;

int main()
{
	setlocale(LC_ALL, "portuguese");
	int soma, num;
	num=4; soma=num;
	do{
		printf("%d\n", soma);
		num=num+1;
		soma=soma+num;
	}while(soma<20);
	system("Pause");
	return 0;
}

//"do_while" - condi��o tem que ser falsa para ele pode repitir
