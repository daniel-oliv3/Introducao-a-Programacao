#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* P9 � Fa�a um algoritmo que leia 20 n�meros e
imprimir a soma dos n�meros cujo o valor do
cubo dos n�meros s�o menores que 300:;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int c=1, cubo=0, num, soma=0;
	while(c<=5){
			printf("  Digite um %d� n�mero: ",c);
			scanf("%d",&num);
			soma=soma+num;
			if(soma<300){
				cubo=cubo+(num*3);
			}
			c++;
	}
	printf("  %d\n",soma);
	printf("%d\n",cubo);
	system("Pause");
	return 0;
}

/**/
