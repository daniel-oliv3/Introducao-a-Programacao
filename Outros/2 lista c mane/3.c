#include <stdio.h>
#include <conio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"ptb");
	int A;
	printf("1: Pizza\t2: Picanha\t3:Peixe Frito");
	printf("\n\nSelecione um prato: ");
	scanf("%d", &A);
	if(A==1)
		printf("Op��o %d : Pizza, Pedido realizado com sucesso!", A);
	else
	if(A==2)
		printf("Op��o %d : Picanha, Pedido realizado com sucesso!", A);
	else
	if(A==3)
		printf("Op��o %d : Peixe Frito, Pedido realizado com sucesso!", A);
	else
		printf("OP�AO INVALIDA!!!");


getch ();
return 0;
}

