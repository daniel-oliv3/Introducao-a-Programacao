#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//P6 – Faça um algoritmo para ler 20 números e
//escrever a média dos números que são
//ímpares:

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int c, cont, numero;
	float m;
	printf("\n\n");
	for(c=1; c<=20; c++){
		printf("\n\n  Digite o %dº número: ",c);
		scanf("%d",&numero);
		if(numero % 2 == 1){ // se(x mod 2 igual a 1)x variavel, % mod e o resto da divisao, 2 sera pelo qual o valor de x sera dividido, == comparação, 0 seria o valor do resto, numero par, se o resto não for 0 o numero sera impar
				cont=cont+1;
		}
		m=m+numero;
		system("cls");
	}
	printf("\n\n A média dos números ímpares é: %.2f\n",m/cont); //media
	
	system("Pause");
	return 0;
}

