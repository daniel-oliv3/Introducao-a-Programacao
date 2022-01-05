#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"ptb");
	
	int saida=1,cont1=0,cont2=0;
	char sexo;
	
	while(saida==1){
		
		printf("Digite o sexo\n");
		scanf("%c",&sexo);
		
		if(sexo=='f'||sexo=='F'){
			cont1++;
		}else if(sexo=='m'||sexo=='M){
			cont2++;
		}
		printf("Deseja continuar\n1-sim\n2-não\n");
		scanf("%d",&saida);
		
		while(saida!=1 && saida!=2){
			printf("Sexo Inválido\nDeseja continuar\n1-sim\n2-não\n");
			scanf("%d",&saida);
		}
	}
	
}
