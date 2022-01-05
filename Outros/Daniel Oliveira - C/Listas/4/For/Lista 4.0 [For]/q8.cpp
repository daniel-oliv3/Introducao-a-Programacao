#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<windows.h>
#include<locale.>
#include<conio.h>


		  int main() {

		  setlocale(LC_ALL, "Portuguese");
		  
		  int cont, cont2, n;
	float e=1, f;
	printf("Informe um numero: ");
	scanf("%d", &n);
	for(cont=1; cont<=3; cont++){
		f=1;
		for(cont2=1; cont2<=cont; cont2++){
			f=f*cont2;
		}
		e+=1/f;
	}
	f=1;
	for(cont=1;cont<=n;cont++){
		f=f*cont;
	}
	e+=1/f;
	getch();
	system("cls");
	printf("E = %.1f", e);



		  getch();
		  }

