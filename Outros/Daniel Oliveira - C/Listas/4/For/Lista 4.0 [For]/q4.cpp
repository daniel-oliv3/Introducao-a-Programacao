#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<windows.h>
#include<locale.>
#include<conio.h>


		  int main() {

		  setlocale(LC_ALL, "Portuguese");
		  
		  int cont;
	float n1, n2, mg=0, ma;
	char nome[60];
	for(cont=0; cont<15; cont++){
		fflush(stdin);
		printf("\nnome: ");
		gets(nome);
		printf("\n\tPR1: ");
		scanf("%f",&n1);
		printf("\tPR2: ");
		scanf("%f", &n2);
		ma=(n1+n2)/2;
		printf("\nmédia:%.1f \n", ceil(ma));
		mg+=n1+n2;
	}
	printf("\n\n\tMédia geral: %.1f",mg/15);



		  getch();
		  }

