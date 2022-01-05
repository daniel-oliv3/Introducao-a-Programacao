/* Ler um número inteiro entre 1 e 12 e escrever o mês correspondente. Caso o usuário digite um número fora
desse intervalo, deverá aparecer uma mensagem informando que não existe mês com este número: */
#include <stdio.h>
#include <conio.h>
int main(){
	int mes;
	printf("Digite um numero de 1 a 12: ");
	scanf("%d", &mes);
	if (mes == 1){
		printf("Mes: Janeiro.");
	} else if (mes == 2){
		printf("Mes: Fevereiro.");
	} else if (mes == 3){
		printf("Mes: Marco.");
	} else if (mes == 4) {
		printf("Mes: Abril.");
	} else if (mes == 5){
		printf("Mes: Maio.");
	} else if (mes == 6){
		printf("Mes: Junho.");
	} else if (mes == 7) {
		printf("Mes: Julho.");
	} else if (mes == 8){
		printf("Mes: Agosto.");
	} else if (mes == 9){
		printf("Mes: Janeiro.");
	} else if (mes == 10) {
		printf("Mes: Marco.");
	} else if (mes == 11){
		printf("Mes: Fevereiro.");
	} else if (mes == 12){
		printf("Mes: Janeiro.");
	} else
		printf("Mes invalido.");
	getch();
	return 0;
}

