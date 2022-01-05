#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<windows.h>
#include<locale.>
#include<conio.h>


		  int main() {

		  setlocale(LC_ALL, "Portuguese");
		  
		  int n,par,impar,i;
		  par=0;
		  impar=0;
		  
		  for(i=1 ; i<=20 ;i++){
		  	printf("Digite um número:");
		  	scanf("%d",&n);
		  	if(n%2==0){
		  		par++;
		  	}else
		  		impar++;
		  	}
		  	
		  
		  printf("\nPar:%d\n",par);
		  printf("\nImpar:%d\n",impar);
		  



		  getch();
		  }

