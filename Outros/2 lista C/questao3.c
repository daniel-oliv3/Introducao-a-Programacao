/* Crie um algoritmo que exiba um cardápio com as opções: 1: Pizza, 2: Picanha e 3: Peixe Frito. Ao
selecionar uma das opções:1, 2 e 3 deverá exibir a mensagem: “Opção (número) : (nome do prato), pedido
realizado com sucesso”. */

#include <stdio.h>
#include <conio.h>
int main(){
	int pdd;
	printf("1 - Pizza\n2 - Picanha\n3 - Peixe Frito");
	printf("\n\nFaca seu pedido: ");
	scanf("%d", &pdd);
	if (pdd == 1){
		printf("Opcao : 1\nNome do prato: Pizza\nPedido realizado com sucesso!");
	} else if (pdd == 2){
		printf("Opcao : 2\nNome do prato: Picanha\nPedido realizado com sucesso!");
	} else if (pdd == 3){
		printf("Opcao : 3\nNome do prato: Peixe frito\nPedido realizado com sucesso!");
	} else {
		printf("Opcao invalida.!");
	}
	getch();
	return 0;
}

