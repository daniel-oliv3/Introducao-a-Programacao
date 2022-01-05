#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// 3. Crie um algoritmo que exiba um cardápio com as opções: 1: Pizza, 2: Picanha e 3: Peixe Frito. Ao
//selecionar uma das opções:1, 2 e 3 deverá exibir a mensagem: “Opção (número) : (nome do prato), pedido
//realizado com sucesso”.

int main()
{
	setlocale(LC_ALL, "portuguese");
	int op;
	printf("\t\t\t Cadápio do dia\n");
	printf("[1] - Pizza\n");
	printf("[2] - Picanha\n");
	printf("[3] - Peixe Frito\n");
	scanf("%d",&op);
	if(op==1)
		printf("Opção [%d] - Pizza. (Pedido realizado com sucesso)\n",op);	
	else
	if(op==2)
		printf("Opção [%d] - Picanha. (Pedido realizado com sucesso)\n",op);		
	else
	if(op==3)
		printf("Opção [%d] - Peixe Frito. (Pedido realizado com sucesso)\n",op);		
	else
		printf("Número Invalido!\n");

	system("Pause");
	return 0;
}

