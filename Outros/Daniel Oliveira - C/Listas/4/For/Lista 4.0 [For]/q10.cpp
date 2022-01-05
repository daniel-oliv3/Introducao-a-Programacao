#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<windows.h>
#include<locale.>
#include<conio.h>


		  int main() {

		  setlocale(LC_ALL, "Portuguese");
		  int cont, i, cont3=0, cont1=0, cont2=0, o;
	float ii=0;
	for(cont=1; cont<=20; cont++){
		printf("Idade: ");
		scanf("%d", &i);
		printf("\n1 - regular\n2 - bom\n3 - excelente\n");
		scanf("%d", &o);
		switch(o){
			case 1:
				cont1++; break;
			case 2:
				cont2++; break;
			case 3:
				ii+=i; cont3++; break;
			default:
				printf("\nINVALIDO!"); cont--; break;
		}
		getch();
		system("cls");
	}
	printf("Media das idades das pessoas que responderam excelente: %.1f\nQuantidade de pessoas que responderam regular: %d\nPercentagem de pessoas que responderam bom: %d", ii/cont3, cont1, 100*cont2/20);



		  getch();
		  }

