#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>
#include<conio.h>

int main(){
	int nt,i,r,cont;
	float s;
	s=0; cont=1;
	     setlocale(LC_ALL, "Portuguese");
	printf("Informe Os Valores:   ");
	scanf("%d %d",&nt ,&r);
   
   if(nt>0 && r>0){
   	 for(i=2; i<=nt; i++){
   	 	s=s+(pow(r,cont))/cont;
   	 	cont++;
   	 		 	
	   }
     		printf("O Resultado é: %.2f \n",s+1);
	}else{
		      	   printf("Operação Invalida !");
        }
   
       
   
system("pause");
return(0);	    	 	
      
	
}
