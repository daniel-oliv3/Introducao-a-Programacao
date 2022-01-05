#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

   int main(){
   int N, Menor, X;
   for(X=1; X<=5; X++){
   	printf("Informe um Numero: ");
   	scanf("%d",&N);
   	if(X==1){
   	   	Menor=N;
   }else if(N<Menor){
        Menor=N;
   }
    
   }//Fim Para
   printf("O Menor e %d",Menor);
   getch();
   return(0);
   }
