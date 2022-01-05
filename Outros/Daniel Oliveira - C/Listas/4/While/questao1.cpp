#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<windows.h>
#include<locale.>


		  int main() {

		  setlocale(LC_ALL, "Portuguese");
		  
		  int a,cont;
		  cont=0;
		  
		  printf("Digite um numero:");
		  scanf("%d",&a);
		  
		  while (a!=0) {
		  	printf("Digite um numero:");
		  	scanf("%d",&a);
		  	
		  
		  		if(a>50 && a<200){
		  			cont++;
		  		  	
		
		  	
		  }
	}
		  printf("\nA quantidade de numeros entre 50 e 200 são:%d\n",cont);



		  system("pause");
		  return(0);
	}

