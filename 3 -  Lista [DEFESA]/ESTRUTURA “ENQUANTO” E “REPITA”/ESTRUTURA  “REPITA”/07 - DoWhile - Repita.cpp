#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

//7. Criar um algoritmo que possa ler um conjunto de pedidos de compra e calcule o valor total da compra. Cada pedido
//� composto pelos seguintes dados: n�mero do pedido; data do pedido, pre�o unit�rio e quantidade desejada. O
//algoritmo dever� processar novos pedidos at� que o usu�rio digite (zero) como n�mero do pedido:

int main()
{

	setlocale(LC_ALL, "portuguese");
	int quantidade, r, novo=1, pedido, data;
	float preco,  resultado, acumulo;
	system("color 1F");	
	system("cls");	
	printf(".....................................................................................\n");
	printf(" Programa que ler um conjunto de pedidos de compra e calcula o valor total da compra\n"); 
	printf(" composto pelos seguintes dados:\n");
	printf("  - data do pedido\n  - pre�o unit�rio\n  - quantidade desejada\n");
	printf(".....................................................................................\n\n");
	//printf("  Deseja realizar um pedido ? 1 - Sim: 0 - N�o: ");
	//scanf("%d",&novo);
	do{
	printf("\n\n  Digite n�mero do pedido: ");
	scanf("%d",&pedido);	
	printf("  Digite data no formato ddmmaa: ");
			scanf("%d",&data);
			printf("  Digite o pre�o: ");
			scanf("%f",&preco);
			printf("  Digite a quantidade: ");
			scanf("%d",&quantidade);
			resultado=preco*quantidade;
			acumulo=acumulo+resultado;
			printf("\n  Pre�o total do pedido: %d � R$: %.2f\n",pedido,resultado);
			printf("  ......................................\n\n");
			printf("  Deseja realizar um novo pedido ? 1 - Sim: 0 - N�o: ");
			scanf("%d",&novo);
	}while(novo!=0);
	printf("\n\n   Data do pedido: %d\n",data);
	printf("   Valor total acumulado da compra �: %.2f\n",acumulo);
	system("Pause");
	return 0;
}

