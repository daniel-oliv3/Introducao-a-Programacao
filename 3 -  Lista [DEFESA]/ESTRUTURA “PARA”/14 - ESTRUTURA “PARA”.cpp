#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//14. Escrever um algoritmo que leia um número N que indica quantos valores devem ser lidos a seguir. Para cada
//número lido, mostre o valor lido e o fatorial deste valor.

int main()
{
	setlocale(LC_ALL, "portuguese");
	int num, i, fat=1, var=0;
	printf("Informe um número: \n");
	scanf("%d",&num);
	for(i=1;i<=num;i++){
		fat=fat*i;
		var++;
		printf("Fatorial de %d é: %d\n",var,fat);
	}
	system("Pause");
	return 0;
}

