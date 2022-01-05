#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<windows.h>
#include<locale.>


		  int main() {

		  setlocale(LC_ALL, "Portuguese");
		  
		  int i=0,n,x,j=1;
		  float s=0;
		  
		  printf("Informe dois valores:");
		  scanf("%d%d",&n,&x);
		  if(x>0 && n>0){
		  	while(i<n){
		  		if(j==1){
		  			for(j=1 ; j<=4 ; j++){
		  				if(i<n){
		  					if((i+2) &2==0){
		  						s+=(pow(-x,(i+2)))/j;
		  						printf("-%d^%d/%d\t",x,(i+2),j);
		  					}else{
		  						s+=(pow(x,(i+2)))/j;
		  						printf("-%d^%d/%d\t",x,(i+2),j);
		  					}
		  					i++;
		  				}
		  			}
		  		}else{
		  			for(j=3 ; j>1 ; j--){
		  				if(i<n){
		  					if((i+2)%2==0){
		  						s+=(pow(-x,(i+2)))/j;
		  						printf("-%d^%d/%d\t",x,(i+2),j);
		  					}else{
		  						s+=(pow(x,(i+2)))/j;
		  						printf("-%d^%d/%d\t",x,(i+2),j);
		  					}
		  					i++;
		  				}
		  			}
		  		}
		  	}
		  	printf("\nO resultado da serie é:%.2f\n",s);
		  }else{
		  	printf("\nValor Inválido\n");
		  }



		  system("pause");
		  return(0);
		  }

