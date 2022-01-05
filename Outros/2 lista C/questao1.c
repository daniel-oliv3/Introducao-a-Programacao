/* Ler as 3 notas de um aluno, calcular sua média aritmética e imprimir APROVADO se a Média for maior ou
igual que 7,0 e REPROVADO caso a média for menor que 3,0 e PROVA FINAL se a média for menor que
7,0 e maior ou igual que 3,0 */

#include <stdio.h>
#include <conio.h>
int main(){
	float n1,n2,n3,m;
	printf("Digite as tres notas: ");
	scanf("%f %f %f", &n1, &n2, &n3);
	m = (n1+n2+n3) / 4;
	if (m >= 7) {
		printf("Aprovado.");
	} else if (m < 3) {
		printf("Reprovado.");
	} else if (m < 7 && m >= 3) {
		printf("Prova final.");
	}
	getch();
	return 0;
}

