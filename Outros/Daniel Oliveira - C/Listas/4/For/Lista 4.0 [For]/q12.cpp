#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<windows.h>
#include<locale.>
#include<conio.h>


		  int main() {

		  setlocale(LC_ALL, "Portuguese");
		  
		  int n, f, n2, cont, cont2;
	printf("Quantidade de numeros a serem lidos: ");
	scanf("%d", &n);
	getch();
	system("cls");
	if(n>0){
		for(cont=1; cont<=n; cont++){
			printf("Valor %d\n", cont);
			scanf("%d", &n2);
			printf("\nFatorial de %d: ", n2);
			f=1;
			for(cont2=1; cont2<=n2; cont2++){
				f=f*cont2;
			}
			printf("%d", f);
			getch();
			system("cls");
		}
	}
	else
	printf("INVALIDO");



		  getch();
		  }

