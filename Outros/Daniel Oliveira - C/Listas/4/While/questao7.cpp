#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<windows.h>
#include<locale.>


		  int main() {

		  setlocale(LC_ALL, "Portuguese");
		  
		  int p,qd,dt;
		  float pu,tpg,v;
		  tpg=0;
		  printf("\nInforme o numero de pedidos\n");
		  scanf("%d",&p);
		  while(p>0){
		  
		  printf("\nInforme a quantidade desejada\n");
		  scanf("%d",&qd);
		  printf("\nInforme o valor unitário do produto\n");
		  scanf("%f",&pu);
		  if(qd>1){
		  	v=qd*pu;
		  	
		  }else if(qd==1){
		  	v=pu;
		  }
		  tpg=tpg+v;
		  printf("\nO numero do pedido é:%d\n",p);
		  printf("\nO valor unitário é:%.2f\n",pu);
		  printf("\nTotal a pagar é:%.2f\n",tpg);
		  printf("\nInforme o numero de pedidos:\n");
		  scanf("%d",&p);
	}
		



		  system("pause");
		  return(0);
	}

