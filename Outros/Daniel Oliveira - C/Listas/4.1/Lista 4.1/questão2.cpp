#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<windows.h>
#include<locale.>


		  int main() {

		  setlocale(LC_ALL, "Portuguese");
		  int i,n,x,z,y;
		  
		  
		  
		  printf("\nDigite um n�mero:");
		  scanf("%d",&n);
		  printf("\nEscolha a opera��o [1] - soma [2] - subtra��o [3] - multiplica��o [4] divis�o");
		  scanf("%d",&x);
		  switch(x){
		  	case 1:
		  		printf("\nTabuada da soma %d\n",n);
		  		for(i=1 ; i<=10 ; i++){
		  			y=n+i;
		  			printf("%d + %d = %d \t\t\t \n", n,i,y);
		  			
		  			
		  		}
		  		break;
		  	case 2:
		  		printf("\nTabuada da subtra��o %d\n",n);
		  		for(i=1 ; i<=10 ; i++){
		  			printf("%d - %d = %d \t\t\t \n",n+i,n,i);
		  			
		  		}
		  		break;
		  	case 3:
		  		printf("\nTabuada da multiplica��o %d \n",n);
		  		for(i=1 ; i<=10 ; i++){
		  			z=n*i;
		  			printf("%d x %d = %d \t\t\t \n",n,i,z);
		  			
		  		}
		  		break;
		  	case 4:
		  		printf("\nTabuada da divis�o %d \n",n);
		  		for(i=1 ; i<=10 ; i++){
		  			printf("%d / %d = %d \t\t\t \n",n*i,n,i);
		  			
		  		}
		  		break;
		  	default:
		  		printf("\nOp��o Inv�lida\n");
		  }
		 




		  system("pause");
		  return(0);
		  }

