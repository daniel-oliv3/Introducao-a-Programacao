#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<windows.h>
#include<locale.>
#include<conio.h>


		  int main() {

		  setlocale(LC_ALL, "Portuguese");
		  
		  int n,i,mult;
		  
		  for(i=1 ; i<=100 ; i++){
		  	printf("Digite um número:");
		  	scanf("%d",&n);
		  	if(n%5==0){
		  		mult++;
		  	}
		  }
		  printf("\nOs números multiplos de 5 são:%d\n",mult);




		  getch();
		  }

