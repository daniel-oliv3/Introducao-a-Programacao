#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* Exemplo 3 - Repita (Linguagem C)
Faça um algoritmo que peça a leitura de um valor para a variável
num, multiplicar este valor por 3, colocando o resultado em uma
variável R e apresentar o valor. Tudo isso deverá ser repetido por
5 vezes:
;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int num, r, cont;
	cont=1;
	do{
		printf("  Informe um número: ");
		scanf("%d",&num);
		r=num*3;
		printf("  O número é: %d - o seu triplo é: %d\n",num,r);
		cont++;
	}while(cont<=5);
	system("Pause");
	return 0;
}

/**/
