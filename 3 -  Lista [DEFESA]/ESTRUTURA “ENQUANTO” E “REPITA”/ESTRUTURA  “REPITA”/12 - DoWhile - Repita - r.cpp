#include<stdio.h>
#include<stdlib.h>
#include<locale.>

// 12. Escreva um algoritmo que leia um n�mero n (n�mero de termos de uma progress�o aritm�tica), a1 ( o primeiro termo
//da progress�o) e r (a raz�o da progress�o) e escreva os n termos desta progress�o, bem como a soma dos
//elementos (tem que usar la�o de repeti��o).


	int main() {
	setlocale(LC_ALL, "Portuguese");
	int n, n0=1, a1, r, s=0;
	system("color 1F");
	printf("\n N�mero de termos de uma progress�o aritm�tica: ");
	scanf("%d",&n);
	printf(" Primeiro termo da progress�o: ");
	scanf("%d",&a1);
	printf(" Raz�o da progress�o: ");
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
