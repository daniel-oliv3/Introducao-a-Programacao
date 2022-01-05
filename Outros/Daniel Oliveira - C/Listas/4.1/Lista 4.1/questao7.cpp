#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<windows.h>
#include<locale.>


		  int main() {

		  setlocale(LC_ALL, "Portuguese");
		  
		  int n,i,cont1,cont2,soma,soma2;
		  cont1=0;
		  cont2=0;
		  soma=0;
		  soma2=0;
		  
		  printf("Informe um número:");	
		  scanf("%d",&n);
		  for(i=1 ; i<=10 ; i++){
		  	if(n%2==0){
		  		soma=soma+cont1;
		  		cont1++;
		  	}else if(n%1==0 && n%n==0){
		  		soma2=soma2+cont2;
		  		cont2++;
		  	}
		  	printf("\nA soma dos números pares é:%d\n",soma);
		  	printf("\nA soma dos números primos é:%d\n",soma2);
		  }
		  
		  



		  system("pause");
		  return(0);
		  }

