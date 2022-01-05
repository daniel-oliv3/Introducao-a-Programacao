#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"ptb");
	
	int num,f1=0,f2=1,f3;
	
	printf("Digite o numero");
	scanf("%d",&num);
	
	if(num<0){
		printf("Número inválido");
	}else{
		printf("0 - 1");
		
		while(f2<num){
			f3=f2+f1;
			
			printf("-%d",f3);
			
			f1=f2;
			f2=f3;
			
		}
		
	}
	
					getch();
					return(0);
}
