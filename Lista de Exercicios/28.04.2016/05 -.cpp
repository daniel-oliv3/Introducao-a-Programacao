#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// 05 faça um algoritmo que receba três números obrigatoriamente em ordem crescente e um quarto numero que não siga essa regra,
//mostre, em seguida os 4 numeros em ordem decrscente suponha que o usuario digitara quatro numeros diferentes.

int main()
{
	setlocale(LC_ALL, "portuguese");
	int n1, n2, n3, n4, r;
	printf("== Informe três números obrigatoriamente em ordem crescente: [ex: 1 2 3] ==\n");
	printf("Informe o primeiro número: \n");
	scanf("%d",&n1);
	printf("Informe o segundo número: \n");
	scanf("%d",&n2);
	printf("Informe o terceiro número: \n");
	scanf("%d",&n3);
	printf("== Informe o quarto número que não siga essa regra. ==\n");
	printf("Informe o quarto número: \n");
	scanf("%d",&n4);
	if(n1>n2){
		r=n1;
		n1=n2;
		n2=r;
	}else{
		if(n1>n3){
			r=n1;
			n1=n3;
			n3=r;
		}else{
			if(n2>n3){
				r=n2;
				n2=n3;
				n3=r;
			}
		}
	}
	printf("Ordem Crescente: %d %d %d %d\n",n1,n2,n3,n4);	
	system("Pause");
	return 0;
}

