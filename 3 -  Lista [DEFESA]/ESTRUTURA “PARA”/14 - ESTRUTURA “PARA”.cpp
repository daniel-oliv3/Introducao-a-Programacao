#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//14. Escrever um algoritmo que leia um n�mero N que indica quantos valores devem ser lidos a seguir. Para cada
//n�mero lido, mostre o valor lido e o fatorial deste valor.

int main()
{
	setlocale(LC_ALL, "portuguese");
	int num, i, fat=1, var=0;
	printf("Informe um n�mero: \n");
	scanf("%d",&num);
	for(i=1;i<=num;i++){
		fat=fat*i;
		var++;
		printf("Fatorial de %d �: %d\n",var,fat);
	}
	system("Pause");
	return 0;
}

