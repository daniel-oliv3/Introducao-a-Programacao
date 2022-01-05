#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<windows.h>
#include<locale.>


		  int main() {

		  setlocale(LC_ALL, "Portuguese");
		  
		  int n=3;
		  
		  while(n%5!=0){
		  	
		  	printf("Digite um numero:");
		  	scanf("%d",&n);
		  	printf("\nQuadrado: %d\n",n*n);
		  }
		



		  system("pause");
		  return(0);
		  }

