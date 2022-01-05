#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

//7. Criar um algoritmo que possa ler um conjunto de pedidos de compra e calcule o valor total da compra. Cada pedido
//é composto pelos seguintes dados: número do pedido; data do pedido, preço unitário e quantidade desejada. O
//algoritmo deverá processar novos pedidos até que o usuário digite (zero) como número do pedido:

int main()
{

	setlocale(LC_ALL, "portuguese");
	int quantidade, r, novo, pedido, dia, mes, ano, data;
	float preco,  resultado, acumulo;
	system("color 1F");	
	system("cls");	
	printf(".....................................................................................\n");
	printf(" Programa que ler um conjunto de pedidos de compra e calcula o valor total da compra\n"); 
	printf(" composto pelos seguintes dados:\n");
	printf("  - data do pedido\n  - preço unitário\n  - quantidade desejada\n");
	printf(".....................................................................................\n\n");
	printf("\n\n  Digite número do pedido: ");
	scanf("%d",&pedido);
	while(pedido!=0){
			printf("  Digite data no formato ddmmaa: ");
			scanf("%d",&data);
			printf("  Digite o preço: ");
			scanf("%f",&preco);
			printf("  Digite a quantidade: ");
			scanf("%d",&quantidade);
			resultado=preco*quantidade;
			acumulo=acumulo+resultado;
			dia=data/10000;
			mes=(data/100)%100;
			ano=data%100;
			printf("\n  Preço total do pedido nº: %d é R$: %.2f\n",pedido,resultado);
			printf("  ......................................\n\n");
			printf("  Deseja realizar um novo pedido ? 1 - Sim: 0 - Não: ");
			scanf("%d",&pedido);
	}
	printf("\n\n   Dia: %d  Mês: %d  Ano: %d\n",dia,mes,ano);
	printf("   Valor total acumulado da compra é: %.2f\n",acumulo);
	system("Pause");
	return 0;
}

