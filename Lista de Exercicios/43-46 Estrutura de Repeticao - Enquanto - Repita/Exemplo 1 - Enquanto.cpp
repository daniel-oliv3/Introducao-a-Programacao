#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 1 - Escrever um algoritmo que leia os n�meros maiores que 0 enquanto a sua soma n�o ultrapasse
10, escreva soma;;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int soma, num;
	num=1; 
	soma=num;
	while(soma<10){
		printf("%d\n",soma); // dentro do la�o
		num=num+1; // atualizando num acada volta no la�o;
		soma=soma+num; //....
	}
	system("Pause");
	return 0;
}

/**/
