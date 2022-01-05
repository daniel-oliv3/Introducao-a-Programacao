#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 1 - Escrever um algoritmo que leia um número N inteiro e positivo que indica quantos valores devem ser lidos a seguir. para cada número
lido também inteiro e positivo, mostre o resultado contendo o valor lido e o fatorial deste valor.
;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int n, fat=1, c, v;
	printf("  Digite um número: ");
	scanf("%d",&n);
	for(c=1; c<=n; c++){
		fat=fat*c;
		v++;
	}
	printf("  %d --> %d\n",v,fat);
	system("Pause");
	return 0;
} 
/**/
