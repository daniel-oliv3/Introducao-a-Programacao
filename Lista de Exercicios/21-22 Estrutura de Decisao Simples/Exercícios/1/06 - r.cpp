#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// 6 � Dados dois n�meros X e Y, digitados pelo usu�rio, se
//estiverem em ordem crescente, trocar o valor de X por Y e
//vice-versa:

int main()
{
	setlocale(LC_ALL, "portuguese");
	int Y, X, aux;
	printf("Informe um valor para [Y]: \n");
	scanf("%d",&Y);
	printf("Informe um valor para [X]: \n");
	scanf("%d",&X);
	if(Y < X)
	{
			aux = Y;
			Y = X;
			X = aux;
		printf("O valor trocado �: [Y]%d . [X]%d\n",Y,X);
	}
	else
		printf("Os valores sem a troca �: [Y]%d - [X]%d\n",Y,X);
	system("Pause");
	return 0;
}

