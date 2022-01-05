#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(){
	
	char nome[20];
	float pr1,pr2,m,cont=0,mg=0,acum;
	int i;
	for(i=1;i<=15;i++){
		
			
			printf("digite o nome do aluno\n");
			fflush(stdin);
			gets(nome);
			printf("digite a primeira nota do(a) %s\n",nome);
			scanf("%f",&pr1);
			printf("digite a segunda nota do(a) %s\n",nome);
			scanf("%f",&pr2);
		
			
			m=(pr1+pr2)/2;
			acum=acum+m;
			cont++;
			mg=(acum)/cont;
			
			printf("_____________________________\n");
			printf("A media do aluno %s é %.2f\n",nome,m);
			printf("_____________________________\n");
	}
	
			printf("_____________________________\n");
			printf("A media total da sala é %.2f\n",mg);
			printf("_____________________________\n");

						getch();
						return(0);
}
