#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<windows.h>
#include<locale.>


		  int main() {
		  

		  setlocale(LC_ALL, "Portuguese");
		  
		  int a=0, b=1,x,i=1;
		  
		  printf("\n");
		  printf("\n",a);
		  printf("\n",b);
		  
		  while(i<=20){
		  
		  
		  	x=a+b;
		  	printf("%d ", x);
		  	a=b;
		  	b=x;
		  	i++;
	
}
		  printf("\n");


		  system("pause");
		  return(0);

}
