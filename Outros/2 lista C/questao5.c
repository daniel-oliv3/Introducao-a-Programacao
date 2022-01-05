#include <stdio.h>
#include <string.h>
#include <conio.h>
int main(){
	char sigla[2];
	printf("Digite a sigla do estado: ");
	scanf("%s", strlwr(sigla));
	if (!strcmp(sigla,"am")||!strcmp(sigla,"AM")) {
		printf("Amazonense");
	} else if (!strcmp(sigla,"ba")||!strcmp(sigla,"BA")){
		printf("Baiano");
	} else if (!strcmp(sigla,"rj")||!strcmp(sigla,"RJ")){
		printf("Carioca");
	} else if (!strcmp(sigla,"sp") ||!strcmp(sigla,"SP")){
		printf("Paulista");
	} else if (!strcmp(sigla,"pe") ||!strcmp(sigla,"PE")){
		printf("Pernanbucano");
	} else
		printf("Outros estados");
	getch();
	return 0;
}

