#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

/* Exemplo 4 - Repita (Linguagem C)
Fa�a um algoritmo que leia os n�meros inteiros n�o
determinados e escreva seu cubo at� que o usu�rio deseje sair:
;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int num;
	float cubo;
	char resp=0;
	do{
		printf("  Informe um n�mero: ");
		scanf("%d",&num);
		cubo=pow(num, 3);
		printf("  O n�mero �: %d - o seu cubo �: %.2f\n",num,cubo);
		printf("  Deseja continuar S - sim ou N - n�o: ");
		scanf("%s",&resp);
	}while(resp == 'S' || resp == 's');
	system("Pause");
	return 0;
}

/**/
