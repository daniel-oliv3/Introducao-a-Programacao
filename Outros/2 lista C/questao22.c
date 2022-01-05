#include<stdio.h>
#include<conio.h>

int main()
{
	char x;
	int a,b;
	float result=0,j,s;
	
	printf("Informe o operador aritmético desejado, sendo: \n\n+ = Adição \n- = Subtração \n* = Multiplicação \n/ = Divisão \n\nOperador: ");
	scanf("%c",&x);
	
	if(x=='+' || x=='-' || x=='*' || x=='/'){
		printf("Informe dois números inteiros: ");
		scanf("%d%d",&a,&b);
		
		if(x=='+'){
			result=a+b;
		}else{
			if(x=='-'){
				result=a-b;
			}else{
				if(x=='*'){
					result=a*b;
				}else{
					if(x=='/'){
						j=a; s=b;
						result=j/s;
					}
				}
			}
		}
		
	printf("Resultado: %.2f\n\n",result);
		
	}else{
		printf("Operador inválido! Os válidos são +, -, *, /\n\n");
	}
	getch();
	return 0;
}

