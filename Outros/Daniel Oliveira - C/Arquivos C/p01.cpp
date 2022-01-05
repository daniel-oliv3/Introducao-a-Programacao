#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

   int main(){
   	int NUM, CONT=0;
   printf("Informe Um Numero: ");
   scanf("%d",&NUM);
   do{
         if(NUM>=50 && NUM<=200)
   	     CONT++;
   	     printf("Informe o Numero: ");
         scanf("%d",&CONT);
   }while(NUM!=0);
   
   printf("A Quantidade %d", CONT);
   getch();
   return(0);
   }
