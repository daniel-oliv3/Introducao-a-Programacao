#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// 2 � Fa�a um algoritmo para somar dois n�meros inteiros e multiplicar o
//resultado pelo primeiro n�mero e mostre os resultados:

int main()
{
	setlocale(LC_ALL, "portuguese");
	int num1, num2, r, m, s;
	printf("Informe o primeiro n�mero: \n");
	scanf("%d",&num1);
	printf("Informe o segundo n�mero: \n");
	scanf("%d",&num2);
	s=num1+num2;
	m=s*num1;
	printf("A soma dos dois n�meros �: %d + %d = %d\n",num1,num2,s);
	printf("A multiplica��o do resultado pelo primeiro n�mero �: %d x %d = %d\n",s,num1,m);	
	system("Pause");
	return 0;
}

