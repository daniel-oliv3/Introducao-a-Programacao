#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


// 13. Faça um algoritmo que leia uma quantidade não determinada de números positivos. Calcule a quantidade de
//números pares e ímpares, a média de valores pares e a média geral dos números lidos. O número que encerrará a
//leitura será zero.

int main()
{
	setlocale(LC_ALL, "portuguese");
	int n, p=0, i=0;
	float tt=0, ttp=0;
	printf(".......................................................\n");
	printf(" Programa que ler uma quantidade de números e imprime:\n números pares e ímpares\n média de valores pares\n média geral\n encerrar quando a tecla 0 (zero) for digitada\n");
	printf(".......................................................\n\n");
	system("color 1F");
	printf("\n  Digite um número: ");
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
			printf("\n  Digite um número: ");
			scanf("%d", &n);
			while(n<0){
				system("cls");
				printf(" <Número inválido!>\n\n\a  Digite um número: ");
				scanf("%d", &n);
			}
		}
	}
	else
	printf("\n<Número inválido!>\n\n\a");
	printf("  Pares: %d\n  Impares: %d\n  Média do pares: %.1f\n  Média geral: %.1f\n", p, i, ttp/p, tt/(p+i));
	system("Pause");
	return 0;
}

