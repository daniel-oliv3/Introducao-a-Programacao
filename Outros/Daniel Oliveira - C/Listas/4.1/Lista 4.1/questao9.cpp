#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<windows.h>
#include<locale.>


		  int main() {

		  setlocale(LC_ALL, "Portuguese");
		  
		  int n,r,cont,i;
		  float s;
		  s=0;
		  cont=1;
		  
		  printf("Informe dois valores:");
		  scanf("%d%d",&n,&r);
		  if(n>0 && r>0){
		  	for(i=2 ; i<=n ; i++){
		  		s=s+(pow(r,cont))/cont;
		  		cont++;
		  	}
		  	printf("\nO resultado é:%.2f\n",s+1);
		  	
		  }else{
		  	printf("\nValor Inválido");
		  }



		  system("pause");
		  return(0);
		  }

