#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

/*  INTRODUÇÃO À PROGRAMAÇÃO
Prof. Sérgio Roberto Costa Vieira - Estrutura de Repetição Aninhada
ESTRUTURAS DE REPETIÇÃO;
*/

/* 12. Faça um programa que leia o número de termos e um valor inteiro e positivo para X. Calcule o Arco Tangente e
mostre o valor da série a seguir:

sen(x) = X - X3 + X5 - X7 + X9 - …
             3!   5!   7!   9!

;*/


int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	long int c, j, x, n, fat;
	double i=1, sen=1;
	printf("  Digite o número de termo para X: ");
	scanf("%f",&n);
	printf("  Digite um valor: ");
	scanf("%f",&x);
	for(c=2; c<=n; c++){
		i+=2;
		for(j=1; j<=i; j++){
			fat*=j;
		}
		if(c%2==0){
			sen-pow(x,i)/fat;
		}else{
			if(c%2==1){
				sen+pow(x,i)/fat;
			}
		}
		fat=1;
	}
	printf("  O arco tangente é: %.3f\n",sen);
	system("Pause");
	return 0;
}

/* Aluno: Daniel Oliveira de Souza;
   Faculdade: FUCAPI;
*/
