#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* Construa um algoritmo que calcule a
média aritmética de um conjunto de
números pares que forem fornecidos
pelo usuário. O valor de finalização
será o valor 0. Nada impede o usuário
de informar quantos números ímpares
quiser com a ressalva de que não
poderão ser acumulados:;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int n, con, acm;
	float mnp;
	con=0; acm=0; n=1; mnp=0;
	while(n != 0){
		printf("  Informe o número: ");
		scanf("%d",&n);
		if((n % 2)==0){ // se(o numero for par)faça;
			acm=acm+n; // variavel acumuladora;
			con=con+1; // variavel contadora; 
		}
	}
	if(con>0){
		mnp=(float)acm/con; // casting, trasformando duas variaveis do tipo inteiro para float, acm/con;
		printf("  A média = %.2f\n",mnp);
	}else{
		printf("  Nenhum número par foi fornecido!\n");
	}
	system("Pause");
	return 0;
}

/**/
