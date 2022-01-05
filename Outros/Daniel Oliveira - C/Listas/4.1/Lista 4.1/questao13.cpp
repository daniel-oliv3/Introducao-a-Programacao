#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<windows.h>
#include<locale.>


		  int main() {

		  setlocale(LC_ALL, "Portuguese");
		  
		  int n,r,j,i,cont,fat;
		  float s;
		  fat=1;
		  cont=1;
		  s=0;
		  
		  printf("Informe dois valores");
		  scanf("%d%d",&n,&r);
		  if(n>0 && r>0){
		  	for(i=1 ; i<=n ; i++){
		  		fat=1;
		  	for(j=1 ; j<=cont ; j++){
		  		fat=fat*j;
		  		
		  	}
		  	  s=s+(pow(r,cont))/fat;
		  	  cont++;
		  	}
		  	printf("\nO resultado é:%.2f\n",s+1);
		  }else{
		  	printf("\nValor inválido\n");
		  }



		  system("pause");
		  return(0);
		  }

