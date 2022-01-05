#include <conio.h> //Questão 9 VERIFICAR
#include <stdio.h>
#include<locale.h>
#include<math.h>
int main (){
	setlocale(LC_ALL,"ptb");
	int N,R,CONT,I;
	float S;
	S=0; CONT=1;
	
	printf("\nInforme O valor: ");
	scanf("%d",&N);
	printf("\nInforme O valor: ");
	scanf("%d",&R);

	if(N>0 and R>0)
	{
           for(I=1;I=N-1;I++)
		   {				
              S=S+(pow(R,CONT));
              CONT++;
           }
           printf("\nO resultado é: %.2f\n",S+1);
    }        
getch();
return(0);
}// N=4 R=1
