#include<stdio.h>
#include<stdlib.h>
#include<locale.>

// 12. Escreva um algoritmo que leia um número n (número de termos de uma progressão aritmética), a1 ( o primeiro termo
//da progressão) e r (a razão da progressão) e escreva os n termos desta progressão, bem como a soma dos
//elementos (tem que usar laço de repetição).


	int main() {
	setlocale(LC_ALL, "Portuguese");
	int n, n0=1, a1, r, s=0;
	system("color 1F");
	printf("\n Número de termos de uma progressão aritmética: ");
	scanf("%d",&n);
	printf(" Primeiro termo da progressão: ");
	scanf("%d",&a1);
	printf(" Razão da progressão: ");
	scanf("%d",&r);
	printf("\n");
	do{
		printf("%d ",a1);
		s+=a1;
		a1+=r;
		n0++;
	}while(n0<=n);
	printf("\n  Soma dos termos: %d\n",s);
	system("pause");
	return(0);
	}
