#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"ptb");
	
	int nped,qtd;
	float vlped=0,prped,ptped=0;
	char dtped[12];
	
	printf("Digite o n�mero do pedido\n");
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
		
		printf("\nDeseja encerrar suas compras\n0-sim\n1-n�o");
		scanf("%d",&nped);
		
		while(nped!=0 && nped!=1){
		
		printf("Oops, Algo errado tente novamente");
		
		printf("Deseja encerrar suas compras\n0-sim\n1-n�o");
		scanf("%d",&nped);
		}
		
	}
	
		printf("O n�mero do pedido � %d\n",nped);
		printf("A data do pedido � %s\n",dtped);
		printf("O total do pedido � %.2f\n",ptped);
}
