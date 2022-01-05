#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// 12. Faça um algoritmo que leia 5 (cinco) valores inteiros e mostre o maior elemento e o menor elemento:

int main()
{
	setlocale(LC_ALL, "portuguese");
	int n1, n2, n3, n4, n5, ma, me;
	printf("Informe o primeiro número: \n");
	scanf("%d",&n1);
	printf("Informe o segundo número: \n");
	scanf("%d",&n2);
	printf("Informe o terceiro número: \n");
	scanf("%d",&n3);
	printf("Informe o quarto número: \n");
	scanf("%d",&n4);
	printf("Informe o quinto número: \n");
	scanf("%d",&n5);
	if(n1 != n2 && n1 != n3 && n1 != n4 && n1 != n5 && n2 != n3 && n2 != n4 && n2 != n5 && n3 != n4 && n3 != n5 && n4 != n5){
		if(n1 > n2){
			ma = n1; me = n2;
		}else{
			ma = n2; me =n1;
		}if(n3 > ma){
			ma = n3;
		}else{
			if(n3 < me){
				me = n3;
			}
		}if(n4 > ma){
			ma = n4;
		}if(n4 < me){
			me = n4;
		}
	}if(n5 > ma){
		ma = n5;
	}else{
		if(n5 < me){
			me = n5;
		}else
		printf("Os Números devem ser diferentes!\n");
	}
	printf("Maior: %d\n",ma);
	printf("Menor: %d\n",me);
	system("Pause");
	return 0;
}

