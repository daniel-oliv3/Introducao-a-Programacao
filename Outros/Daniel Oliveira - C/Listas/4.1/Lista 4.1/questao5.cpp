#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<windows.h>
#include<locale.>


		  int main() {

		  setlocale(LC_ALL, "Portuguese");
		  
		  int a,a1,a2,i;
		  
		  printf("Digite dois valores:");
		  scanf("%d %d",&a1,&a2);
		  printf("%d - %d ",a1,a2);
		  
		  for(i=3 ; i<10 ; i++){
		  	if(i%2==0){
		  		a=a2-a1;
		  	}else {
		  		a=a2+a1;
		  	}
		  	
		  }
		  a1=a1;
		  a2=a;
		  printf(" - %d\n", a);



		  system("pause");
		  return(0);
		  }

