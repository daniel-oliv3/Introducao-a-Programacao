#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<windows.h>
#include<locale.>
#include<conio.h>


		  int main() {

		  setlocale(LC_ALL, "Portuguese");
		  
		  int q, cont;
	float pr, tt=0;
	for(cont=1; cont<=15; cont++){
		printf("\tProduto %d\n\nQuantidade: ", cont);
		scanf("%d", &q);
		printf("\nPreço ");
		scanf("%f", &pr);
		tt+=pr*q;
		getch();
		system("cls");
	}
	printf("\n\tTotal: %.2f", tt);



		  getch();
		  }

