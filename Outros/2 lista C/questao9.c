#include <stdio.h>
#include <conio.h>
int main(){
	float n1,n2,n3,m;
	printf("Digite as 3 notas do aluno: ");
	scanf("%f %f %f", &n1, &n2, &n3);
	m = (n1 + n2 + n3) / 3;
	if (m >= 7 && m < 10){
		printf("Nota: %.2f, aluno aprovado.",m);
	} else if (m >= 5 && m < 7){
		printf("Nota: %.2f, aluno vai para exame final.",m);
		printf("\nVoce precisa de %.2f para passar.",12-m);
	} else if (m >= 0 && m < 5){
		printf("Aluno reprovado.");
	}
	getch();
	return 0;
}

