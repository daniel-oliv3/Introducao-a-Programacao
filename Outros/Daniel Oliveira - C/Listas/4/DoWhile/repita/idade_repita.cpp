#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"ptb");
	int idade,cont=0,cont1=0;
	char nome[10],a;
	
	do{
	
	printf("Deseja Cadastrar uma pessoa\ns-sim\n\n");
	fflush(stdin);
	scanf("%c",&a);
	if(a!='s' && a!='S'){
		printf("Ops Algo errado\n");
	}
	
	}while(a!='s' && a!='S');
	
		do{
		
			printf("Digite o nome da pessoa\n");
			fflush(stdin);
			scanf("%s",nome);
			printf("Digite a idade da pessoa\n");
			scanf("%d",&idade);



			
			if(idade>0 && idade<21){
				cont++;
			}else if(idade>50){
				cont1++;
			}
			
			
			do{
				if(a!='s' && a!='S' && a!='n' && a!='N'){
				printf("Ops Algo errado\n");
				}
				printf("desja cotinuar a cadastrar\ns-sim\nn-não\n");
				fflush(stdin);
				scanf("%c",&a);
			}while(a!='s' && a!='S' && a!='n' && a!='N');
			
			
		}while(a=='s');
	
	printf("Tem %d com menos de 21 \nTem também %d com mais de 50 anos",cont,cont1);
	
							getch();
							return(0);
}
