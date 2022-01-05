#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<windows.h>
#include<locale.>


		  int main() {

		  setlocale(LC_ALL, "Portuguese");
		  
		  float chico,juca;
		  int cont=0;
		  chico=1.50;
		  juca=1.10;
		  printf("\nChico tem 1.50 de altura, cresce 2 cm por ano e juca tem 1.10, cresce 3cm por ano\n");
		  while(chico>=juca){
		  
		  chico=chico+0.2;
		  juca=juca+0.3;
		  cont++;
	}
	     printf("\nEm %d anos terão a mesma altura\n",cont);
		  
		  
		  



		  system("pause");
		  return(0);
}
