#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<windows.h>
#include<locale.>
#include<conio.h>


		  int main() {

		  setlocale(LC_ALL, "Portuguese");
		  
		  int cont, cont2=0;
	float ma, mg=0, n1, n2, n3, n4, n5;
	for(cont=1; cont<=10; cont++){
		printf("\tALUNO %d\nInsira as 5 notas: ", cont);
		scanf("%f %f %f %f %f", &n1, &n2, &n3, &n4, &n5);
		ma=(n1+n2+n3+n4+n5)/5;
		printf("\nMedia: %.1f",ma);
		mg+=n1+n2+n3+n4+n5;
		if(ma>=5)
		cont2++;
		getch();
		system("cls");
	}
	printf("Media da turma: %.1f\nQuantidade de aluno que tiveram média maiores ou igual a 5.0: %d", mg/50, cont2);



		  getch();
		  }

