#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"ptb");
	
	int i,qtd,cont=0;
	float preco,npreco,acum;
	
	for(i=1;i<=15;i++){
		cont++;
		printf("digite o valor do %d produto\n",cont);
		scanf("%f",&preco);
		printf("digite a quantidade do %d produto\n",cont);
		scanf("%d",&qtd);
		
		npreco=preco*qtd;
		acum=acum+npreco;	
	}
	printf("O total gasto pela empresa é de %.2f",acum);
	
	getch();
	return(0);
}
