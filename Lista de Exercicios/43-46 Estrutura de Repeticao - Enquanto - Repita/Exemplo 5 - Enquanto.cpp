#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* Construa um algoritmo que calcule a
m�dia aritm�tica de um conjunto de
n�meros pares que forem fornecidos
pelo usu�rio. O valor de finaliza��o
ser� o valor 0. Nada impede o usu�rio
de informar quantos n�meros �mpares
quiser com a ressalva de que n�o
poder�o ser acumulados:;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int n, con, acm;
	float mnp;
	con=0; acm=0; n=1; mnp=0;
	while(n != 0){
		printf("  Informe o n�mero: ");
		scanf("%d",&n);
		if((n % 2)==0){ // se(o numero for par)fa�a;
			acm=acm+n; // variavel acumuladora;
			con=con+1; // variavel contadora; 
		}
	}
	if(con>0){
		mnp=(float)acm/con; // casting, trasformando duas variaveis do tipo inteiro para float, acm/con;
		printf("  A m�dia = %.2f\n",mnp);
	}else{
		printf("  Nenhum n�mero par foi fornecido!\n");
	}
	system("Pause");
	return 0;
}

/**/
