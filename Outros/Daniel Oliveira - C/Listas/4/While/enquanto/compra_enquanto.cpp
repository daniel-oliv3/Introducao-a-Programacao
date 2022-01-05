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
	
	
	while(nped!=0){
		printf("Digite a data do pedido\n");
		fflush(stdin);
		scanf("%s",&dtped);
		printf("Digite o valor\n");
		scanf("%f",&prped);
		printf("Digite a quantidade\n");
		scanf("%d",&qtd);
		
		vlped=prped*qtd;
		ptped=ptped+vlped;
				
		printf("\nDeseja fazer outro pedido\nOu digite zero para sair");
		scanf("%d",&nped);
		
		while(nped<0){
		
		printf("Oops, Algo errado tente novamente");
		
		printf("Deseja fazer outro pedido\nOu digite zero para sair");
		scanf("%d",&nped);
		}
		
		printf("O total do pedido é %.2f\n",ptped);
		
	}
	
		
}
