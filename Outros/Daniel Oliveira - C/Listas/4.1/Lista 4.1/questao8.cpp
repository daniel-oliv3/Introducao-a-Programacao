#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<windows.h>
#include<locale.>


		  int main() {

		  setlocale(LC_ALL, "Portuguese");
		  
		  int cont,y,i,n;
		  float s;
		  cont=2;
		  s=0;
		  
		  printf("Informe dois valores:");
		  scanf("%d%d",&n,&y);
		  if(n>0 && y>0){
		  	for(i=2 ; i<=n ; i++){
		  		s=s+(pow(y,cont))/cont;
		  		cont=cont+2;
		  	}
		  	printf("\nO resultado é:%.2f\n",s+1);
		  	
		  }else {
		  	printf("\nValor Inválido\n");
		  }
		  
		  



		  system("pause");
		  return(0);
		  }

