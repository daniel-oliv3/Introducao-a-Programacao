/* Faça um algoritmo que leia 5 (cinco) valores inteiros e mostre o maior elemento e o menor elemento */

#include <stdio.h>
#include <conio.h>
int main(){
	int a,b,c,d,e,maior=0,menor=0;
	printf("Digite os 5 numeros:");
	scanf("%d",&a,&b,&c,&d,&e);
	if (a > b && a > c && a > d&& a > e){
		maior = a;
	}
	getch();
	return 0;
}

