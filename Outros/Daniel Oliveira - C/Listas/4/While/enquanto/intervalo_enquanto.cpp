
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"ptb");
	
	int cont=0,num,cond=1;
	
	while(cond!=0){
		
		printf("Digite um valor");
		scanf("%d",&num);
		
		if(num>=50 && num<=200){
			cont++;
		}
		printf("Deseja continuar\n 1-sim\n0-nao");
		scanf("%d",&cond);
		while(cond!=1 && cond!=0){
			printf("Oops Algo errado");
			printf("Deseja continuar\n 1-sim\n0-nao");
			scanf("%d",&cond);
		}
		
	}
	
		printf("Tem %d numeros no intervalo",cont);
		
							getch();
							return(0);	
}
