#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"ptb");
	
	int n,r,p1,cont;
	char s;
	
	do{
	
	printf("Voce quer entrar no programa\ns-sim\nn-não\n");
	fflush(stdin);
	scanf("%c",&s);
	}while(s!='s' && s!='n');
	
	while(s=='s'){
		printf("Digite a progressão\n");
		scanf("%d",&n);
		printf("Digite a razão\n");
		scanf("%d",&r);
		printf("Digite a termo da progressão\n");
		scanf("%d",&p1);
		
		for(cont=1;cont<=n;cont++){
		
		p1=p1+r;
		printf("O resultado da progressão é %d\n",p1);
		
		}
		
		do{
	
	printf("Voce deseja continuar no programa\ns-sim\nn-não\n");
	fflush(stdin);
	scanf("%c",&s);
	}while(s!='s' && s!='n');

	}
	
							system("pause\n");
							return (0);
}
