#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<windows.h>
#include<locale.>
#include<conio.h>


		  int main() {

		  setlocale(LC_ALL, "Portuguese");
		  
		  int n;
	float cont, t, s=1;
	printf("Valor: ");
	scanf("%d", &n);
	getch();
	system("cls");
	printf("S = 1 ");
	for(cont=2; cont<=n; cont++){
		t=1/cont;
		s+=t;
		printf("+ %.2f ", t);
	}
	printf("\nS = %.2f", s);



		  getch();
		  }

