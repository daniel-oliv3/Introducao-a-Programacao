#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int main(){
	setlocale(LC_ALL,"ptb");
	
	int num,res;
	printf("Sa�ra quando entrar m�tiplo de 5\n");
	
	do{
		
		printf("Digite um n�mero\n");
		scanf("%d",&num);
		
		res=pow(num,2);
		printf("O quadrado de %d � %d\n",num,res);
		system("pause");
		system("cls");
	}while(num%5!=0);
	
				return(0);
}
