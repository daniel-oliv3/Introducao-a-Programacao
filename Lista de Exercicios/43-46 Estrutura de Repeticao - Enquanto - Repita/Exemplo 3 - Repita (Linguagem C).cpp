#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* Exemplo 3 - Repita (Linguagem C)
Fa�a um algoritmo que pe�a a leitura de um valor para a vari�vel
num, multiplicar este valor por 3, colocando o resultado em uma
vari�vel R e apresentar o valor. Tudo isso dever� ser repetido por
5 vezes:
;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int num, r, cont;
	cont=1;
	do{
		printf("  Informe um n�mero: ");
		scanf("%d",&num);
		r=num*3;
		printf("  O n�mero �: %d - o seu triplo �: %d\n",num,r);
		cont++;
	}while(cont<=5);
	system("Pause");
	return 0;
}

/**/
