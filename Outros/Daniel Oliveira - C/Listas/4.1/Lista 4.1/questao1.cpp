#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<windows.h>
#include<locale.>


		  int main() {

		  setlocale(LC_ALL, "Portuguese");
		  
		  int n,i;
float s=0;

printf("informe um numero: ");
scanf("%d",&n);

if(n>0){
       for( i=1; i<=n; i++){
       s=s+(i/n);
       }
       printf("o valor de s= %.2f\n",s);
}else
printf("informe um valor positivo");




		  system("pause");
		  return(0);
		  }

