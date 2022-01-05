#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(){
	
	char nome[10];
	int i,cont=0;
	float sal,des;
	
	for(i=1;i<=10;i++){
		
		printf("digite o nome do Trabalhador\n");
		fflush(stdin);
		gets(nome);
		printf("Digite o sálario de %s\n",nome);
		scanf("%f",&sal);
		if(sal<600){
			printf("Isento\n\n");
		}else if(sal>=600 && sal<1500){
			des=sal*10/100;
			printf("O imposto de %s é de %.2f\n\n",nome,des);
		}else{
			des=sal*15/100;
			printf("O imposto de %s é de %.2f\n\n",nome,des);
		}
		
	}
						getch();
						return(0);
}
