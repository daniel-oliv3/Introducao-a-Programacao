#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


// 13. Fa�a um algoritmo que leia uma quantidade n�o determinada de n�meros positivos. Calcule a quantidade de
//n�meros pares e �mpares, a m�dia de valores pares e a m�dia geral dos n�meros lidos. O n�mero que encerrar� a
//leitura ser� zero.

int main()
{
	setlocale(LC_ALL, "portuguese");
	int n, p=0, i=0;
	float tt=0, ttp=0;
	printf(".......................................................\n");
	printf(" Programa que ler uma quantidade de n�meros e imprime:\n n�meros pares e �mpares\n m�dia de valores pares\n m�dia geral\n encerrar quando a tecla 0 (zero) for digitada\n");
	printf(".......................................................\n\n");
	system("color 1F");
	printf("\n  Digite um n�mero: ");
	scanf("%d", &n);
	if(n>0){
		while(n!=0){
			if(n%2==0){
				p++; ttp+=n;
			}
			else
			i++;
			tt+=n;
			system("cls");
			printf("\n  Digite um n�mero: ");
			scanf("%d", &n);
			while(n<0){
				system("cls");
				printf(" <N�mero inv�lido!>\n\n\a  Digite um n�mero: ");
				scanf("%d", &n);
			}
		}
	}
	else
	printf("\n<N�mero inv�lido!>\n\n\a");
	printf("  Pares: %d\n  Impares: %d\n  M�dia do pares: %.1f\n  M�dia geral: %.1f\n", p, i, ttp/p, tt/(p+i));
	system("Pause");
	return 0;
}

