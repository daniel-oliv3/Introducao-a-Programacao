#include<stdio.h>
#include<conio.h>

int main()
{
	char x;
	int a,b;
	float result=0,j,s;
	
	printf("Informe o operador aritm�tico desejado, sendo: \n\n+ = Adi��o \n- = Subtra��o \n* = Multiplica��o \n/ = Divis�o \n\nOperador: ");
	scanf("%c",&x);
	
	if(x=='+' || x=='-' || x=='*' || x=='/'){
		printf("Informe dois n�meros inteiros: ");
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
		printf("Operador inv�lido! Os v�lidos s�o +, -, *, /\n\n");
	}
	getch();
	return 0;
}

