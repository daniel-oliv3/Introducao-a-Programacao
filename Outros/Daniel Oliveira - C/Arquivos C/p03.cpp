#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<ctype.h>

   int main(){
   char sexo;
   int cont_m,cont_f, resp;
   cont_m=0,cont_f=0,resp=1;
   while(resp==1){
   		printf("Informe o Sexo: ");
   		fflush(stdin);
   		scanf("%c",&sexo);
   		sexo = toupper(sexo);
   	    if(sexo=='M'){
     	cont_m++;
      }else if(sexo=='F'){
       cont_f++;
   	  }else{
   	  	printf("Operacao Invalida");
   	      	   }
   	   printf("\n\n digite [1]SIM ou [2] Nao ");
   	   scanf("%d",&resp);
   	   while(resp!=1 && resp!=2){
   	   printf("\n resposta Incorreta");
      }
   }
   	   printf("\n a quantidade do sexo masculino = %d", cont_m);
   	   printf("\n a quantidade do sexo feminino = %d", cont_f);
           	  		
   	
   getch();
   return(0);
   }

