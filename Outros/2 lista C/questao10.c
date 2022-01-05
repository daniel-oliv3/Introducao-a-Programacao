#include <stdio.h>
#include <conio.h>
int main(){
	float inv,valor;
	printf("Tipo de investimento:");
	printf("\n\n1 - Poupanca\n2 - Fundo de Renda Fixa");
	printf("\n3 - Previdencia Privada\n");
	scanf("%f", &inv);
	printf("Valor: ");
	scanf("%f", &valor);
	if (inv == 1) {
		valor += valor * 0.03;
	} else
		if (inv == 2) {
			valor += valor * 0.04;
		} else
			if (inv == 3) {
				valor += valor * 0.35;
			} else
				printf("Tipo invalido");
	printf("Novo valor: %.1f",valor);
	getch();
	return 0;
}

