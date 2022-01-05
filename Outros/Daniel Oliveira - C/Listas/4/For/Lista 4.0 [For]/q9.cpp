#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<windows.h>
#include<locale.>
#include<conio.h>


		  int main() {

		  setlocale(LC_ALL, "Portuguese");
		  
		  float p, f1=0, ff1=0, ff2=0, ff3=0, ff4=0, f2=0, f3=0, f4=0;
	int i, cont;
	for(cont=1; cont<=4; cont++){
		printf("Idade: ");
		scanf("%d", &i);
		printf("\nPeso: ");
		scanf("%f", &p);
		if(i<0){
			printf("INVALIDO");
			cont--;
		}
		else if(i<=10){
			f1+=p;
			ff1++;
		}
		else if(i<=20){
			f2+=p;
			ff2++;
		}
		else if(i<=30){
			f3+=p;
			ff3++;
		}
		else{
			f4+=p;
			ff4++;
		}
		getch();
		system("cls");
	}
	if(ff1==0)
	ff1=1;
	if(ff4==0)
	ff4=1;
	if(ff3==0)
	ff3=1;
	if(ff2==0)
	ff2=1;
	printf("1 a 10\t\t11 a 20\t\t21 a 30\t\t30+\n\n%.1f\t\t%.1f\t\t%.1f\t\t%.1f", f1/ff1, f2/ff2, f3/ff3, f4/ff4);



		  getch();
		  }

