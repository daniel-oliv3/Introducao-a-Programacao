#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

int main(){
	setlocale(LC_ALL,"ptb");
	
	int cont1=0,cont2=0,saida=1;
	char sexo,nome[20];
	
	
	
	do{
		
		
		printf("Digite o sexo");
		fflush(stdin);
		scanf("%c",&sexo);
		
		if(sexo=='m'||sexo=='M'){
			cont1++;
		}else if(sexo=='f'||sexo=='F'){
			cont2++;
		}
		
		
		do{
			printf("Sexo Incorreto\nDeseja Continuar\n1-sim\n2-não");
			scanf("%d",&saida);
		}while(saida!=1 && saida!=2);
		
	}while(saida==1);
	
	printf("Tem %d do sexo Masculino\n\nTem %d do sexo Femenino",cont1,cont2);
	
}//main
