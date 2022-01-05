#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<windows.h>
#include<locale.>
#include<conio.h>


		  int main() {

		  setlocale(LC_ALL, "Portuguese");
		  
		  
		  int i,n;
		  
		  printf("Digite um número");
		  scanf("%d",&n);
		  
		  printf("\nTabuada da soma %d\n",n);
		  for(i=1 ; i<=10 ; i++){	
		  	printf("%d + %d = %d \t\t\t \n",n,i,n+i);
		  	
		  }
		  printf("\nTabuada da subtração %d\n",n);
		  for(i=1 ; i<=10 ; i++){
		  	printf("%d  %d = %d \t\t\t \n",n+i,n,i);
		  }
		  



		  getch();
		  }

