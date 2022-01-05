#include <stdio.h>
#include <conio.h>
int main(){
	int idade;
	printf("Idade do nadador: ");
	scanf("%d", &idade);
	if (idade > 0){
		if (idade >= 5 && idade <= 7){
			printf("Categoria: Infantil A");
		} else if (idade >= 8 && idade <= 10) {
			printf("Categoria: Infantil B");
		} else if (idade >= 11 && idade <= 13){
			printf("Categoria: Juvenil A");
		} else if (idade >= 14 && idade <= 17) {
			printf("Categoria: Juvenil B");
		} else if (idade > 18) {
			printf("Categoria: Senior");
		}
	} else
		printf("Idade invalida");
	getch();
	return 0;
}

