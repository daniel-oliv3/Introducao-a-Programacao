#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//9. Faça um algoritmo que leia quatro números e apresente os resultados de adição e multiplicação dos valores
//entre si, baseando-se na utilização da propriedade distributiva, ou seja, sendo lidas as variáveis A, B, C e D,
//devem ser somadas e multiplicadas A com B, A com C e A com D; B com C, B com D e por último C com
//D:


int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int A, B, C, D;
	
	printf("Digite o Primeiro Número: ");
	scanf("%d",&A);
	printf("Digite o Segundo Número: ");
	scanf("%d",&B);
	printf("Digite o Terceiro Número: ");
	scanf("%d",&C);
	printf("Digite o Quarto Número: ");
	scanf("%d",&D);
	printf("\n");
	printf("\t RESULTADO DA SOMA.\n");
	printf("%d + %d = %d\n",A,B,A+B);
	printf("%d + %d = %d\n",A,C,A+C);
	printf("%d + %d = %d\n",A,D,A+D);
	printf("%d + %d = %d\n",B,C,B+C);
	printf("%d + %d = %d\n",B,D,B+D);
	printf("%d + %d = %d\n",C,D,C+D);
	printf("\n");
	printf("\t RESULTADO DA MULTIPLICAÇÃO.\n");
	printf("%d X %d = %d\n",A,B,A*B);
	printf("%d X %d = %d\n",A,C,A*C);
	printf("%d X %d = %d\n",A,D,A*D);
	printf("%d X %d = %d\n",B,C,B*C);
	printf("%d X %d = %d\n",B,D,B*D);
	printf("%d X %d = %d\n",C,D,C*D);
	
	system("pause");
	return 0;
	
}
