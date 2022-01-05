#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

/* Exemplo 4 - Repita (Linguagem C)
Faça um algoritmo que leia os números inteiros não
determinados e escreva seu cubo até que o usuário deseje sair:
;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int num;
	float cubo;
	char resp=0;
	do{
		printf("  Informe um número: ");
		scanf("%d",&num);
		cubo=pow(num, 3);
		printf("  O número é: %d - o seu cubo é: %.2f\n",num,cubo);
		printf("  Deseja continuar S - sim ou N - não: ");
		scanf("%s",&resp);
	}while(resp == 'S' || resp == 's');
	system("Pause");
	return 0;
}

/**/
