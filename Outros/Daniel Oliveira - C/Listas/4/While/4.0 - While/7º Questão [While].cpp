#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"ptb");
	
	int nped,qtd;
	float vlped=0,prped,ptped=0;
	char dtped[12];
	
	printf("Digite o número do pedido\n");
	scanf("%d",&nped);
	printf("Digite a data do pedido\n");
	scanf("%s",&dtped);
	
	while(nped!=0){
		
		printf("Digite o valor\n");
		scanf("%f",&prped);
		printf("Digite a quantidade\n");
		scanf("%d",&qtd);
		
		vlped=prped*qtd;
		ptped=ptped+vlped;
		
		printf("\nDeseja encerrar suas compras\n0-sim\n1-não");
		scanf("%d",&nped);
		
		while(nped!=0 && nped!=1){
		
		printf("Oops, Algo errado tente novamente");
		
		printf("Deseja encerrar suas compras\n0-sim\n1-não");
		scanf("%d",&nped);
		}
		
	}
	
		printf("O número do pedido é %d\n",nped);
		printf("A data do pedido é %s\n",dtped);
		printf("O total do pedido é %.2f\n",ptped);
}
