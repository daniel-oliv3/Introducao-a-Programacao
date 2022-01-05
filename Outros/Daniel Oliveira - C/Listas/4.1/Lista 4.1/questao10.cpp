#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<windows.h>
#include<locale.>


		  int main() {

		  setlocale(LC_ALL, "Portuguese");
		  
		  int n,x,j,i,cont,fat;
		  float s;
		  s=0;
		  cont=2;
		  fat=1;
		  
		  printf("Informe dois valores:");
		  scanf("%d%d",&n,&x);
		  if(n>0 && x>0){
		  	for(i=2 ; i<=n ; i++){
		  		fat=1;
		  		for(j=1 ; j<=cont ; j++){
		  			fat=fat*j;
		  		}
		  		s=s+(pow(x,cont))/fat;
		  		cont=cont+2;
		  	} 
		  	printf("\nO resultado é:%.2f\n",s+1);
		  }else{
		  
		  printf("\nValor inválido\n");
	}



		  system("pause");
		  return(0);
		  }

