#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 1 - Escrever um algoritmo que leia os números maiores que 0 enquanto a sua soma não ultrapasse
10, escreva soma;;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int soma, num;
	num=1; 
	soma=num;
	while(soma<10){
		printf("%d\n",soma); // dentro do laço
		num=num+1; // atualizando num acada volta no laço;
		soma=soma+num; //....
	}
	system("Pause");
	return 0;
}

/**/
