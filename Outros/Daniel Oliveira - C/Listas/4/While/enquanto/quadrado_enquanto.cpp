#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int main(){
	setlocale(LC_ALL,"ptb");
	
	int num=1,res;
	printf("Sa�ra quando entrar m�tiplo de 5\n");
	
	
	while(num%5!=0){
		
		printf("Digite um n�mero\n");
		scanf("%d",&num);
		
		res=pow(num,2);
		printf("O quadrado de %d � %d\n",num,res);
	}
	
				getch();
				return(0);
}
