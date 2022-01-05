#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<windows.h>
#include<locale.>


		  int main() {

		  setlocale(LC_ALL, "Portuguese");
		  
		  int cont,i;
		  float a;
		  cont=1; a=0;
		  
		  for(i=1 ; i<=25 ; i++){
		  	a=a+cont/i;
		  	cont=cont+2;
		  }
		  printf("\nO resultado é:%.2f\n",a);



		  system("pause");
		  return(0);
		  }

