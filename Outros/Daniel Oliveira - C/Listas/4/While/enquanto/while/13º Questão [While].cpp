#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"ptb");
	
	int cond=1,num,cont,cont1,cont2,cont3;
	float media,media1;
	
	while(cond!=0){
		printf("Digite um número");
		scanf("%d",&num);
		
		if(num>0){
			cont++;
			media=num/cont;
			if(num%2==0){
				cont1++;
				media1=num/cont1;
			}
			if(num%2!=0){
				cont2++;
			}
			
			
			}
			
			printf("Deseja continuar\n1-sim\n0-nao");
				scanf("%d",&cond);
				
				while(cond!=0 && cond!=1){
					printf("Você digitou errado");
					printf("Deseja continuar\n1-sim\n0-nao");
					scanf("%d",&cond);
		}
	}
	printf("O total de números pares são %d",cont1);
	printf("O total de números impares são %d",cont2);
	printf("A media total é %.2f",media);
	printf("A media total dos pares é %.2f",media1);
}
