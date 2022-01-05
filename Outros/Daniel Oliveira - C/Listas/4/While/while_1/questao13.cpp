#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<windows.h>
#include<locale.>


		  int main() {

		  setlocale(LC_ALL, "Portuguese");
		  int n, p=0, i=0;
	float tt=0, ttp=0;
	printf("Informe um numero: ");
	scanf("%d", &n);
	if(n>0){
		while(n!=0){
			if(n%2==0){
				p++; ttp+=n;
			}
			else
			i++;
			tt+=n;
			system("cls");
			printf("Informe um numero: ");
			scanf("%d", &n);
			while(n<0){
				system("cls");
				printf("INVALIDO!\nInforme um numero: ");
				scanf("%d", &n);
			}
		}
	}
	else
	printf("\nINVALIDO!");
	printf("Pares: %d\nImpares: %d\nMedia do pares: %.1f\nMedia geral: %.1f", p, i, ttp/p, tt/(p+i));




		  system("pause");
		  return(0);
		  }

