#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<windows.h>
#include<locale.>


		  int main() {

		  setlocale(LC_ALL, "Portuguese");
		  
		  int n,d,m,a,qt;
		  float p,tt=0;
		  printf("\nInforme o numero do pedido\n");
		  scanf("%d",&n);
		  while(n!=0){
		  printf("\ninforme a Data:");
		  scanf("%d,%d,%d, &d,&d,&a");	  
		  printf("\nInforme a quantidade desejada\n");
		  scanf("%d",&qt);
		  tt+=p*qt;
		  printf("\nInforme o valor unitário do produto\n");
		  scanf("%f",&p);
		  if(qt>1){
		  	a=qt*p;
		  	
		  }else if(qt==1){
		  	a=p;
		  }
		  printf("\nO numero do pedido é:%d\n",p);
		  printf("\nO valor unitário é:%.2f\n",p);
		  printf("\nTotal a pagar é:%.2f\n",tt);
		  printf("\nInforme o numero de pedidos:\n");
		  scanf("%d",&p);
	}
		



		  system("pause");
		  return(0);
	}

