#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// 3. Crie um algoritmo que exiba um card�pio com as op��es: 1: Pizza, 2: Picanha e 3: Peixe Frito. Ao
//selecionar uma das op��es:1, 2 e 3 dever� exibir a mensagem: �Op��o (n�mero) : (nome do prato), pedido
//realizado com sucesso�.

int main()
{
	setlocale(LC_ALL, "portuguese");
	int op;
	printf("\t\t\t Cad�pio do dia\n");
	printf("[1] - Pizza\n");
	printf("[2] - Picanha\n");
	printf("[3] - Peixe Frito\n");
	scanf("%d",&op);
	if(op==1)
		printf("Op��o [%d] - Pizza. (Pedido realizado com sucesso)\n",op);	
	else
	if(op==2)
		printf("Op��o [%d] - Picanha. (Pedido realizado com sucesso)\n",op);		
	else
	if(op==3)
		printf("Op��o [%d] - Peixe Frito. (Pedido realizado com sucesso)\n",op);		
	else
		printf("N�mero Invalido!\n");

	system("Pause");
	return 0;
}

