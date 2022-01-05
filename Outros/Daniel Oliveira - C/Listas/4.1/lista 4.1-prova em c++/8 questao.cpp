#include <conio.h> //Questão 8
#include <stdio.h>
#include <locale.h>
#include <math.h>
int main (){
	setlocale(LC_ALL,"ptb");
	int I,N,Y,CONT;
	float S;
	S=0; CONT=2;
	printf("\nInforme dois valores:\n");
	scanf("%d%d",&N,&Y);
	if(N>0 && Y>0){
           for(I=2;I<=N;I++){ //ou for(I=1;I<=N-1;I++)
                             S=S+(pow(Y,CONT))/CONT; // pow(y,cont) e a mesma coisa do que y**cont
                             CONT=CONT+2;
           }
           printf("\nO resultado é:%.2f ",S+1);
    }             
getch();
return(0);
}// n=3 y=1 é igual a 1,75 
