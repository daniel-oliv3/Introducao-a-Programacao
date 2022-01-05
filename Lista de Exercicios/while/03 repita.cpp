#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

// exemplo 3 repita. - faça um algoritmo que peça a leitura de um valor para a variavel num, multiplique esse valor por 3, colocando o resultado em uma variavel r,
// e aapresentar o valor. tudo isso devera ser repetido por 5 veses.

int main()
{
	setlocale(LC_ALL, "portuguese");
	int num, r, cont;
	cont=1;
	do{
		printf("Informe um número: \n");
		scanf("%d",&num);
		r=num*3; //triplo;
		printf("O número é: %d - o seu triplo é: %d\n",num,r);
		cont++; // se tirar o cont++, entra em loop infinito;
	}while(cont<=5);
	system("Pause");
	return 0;
}

// 
