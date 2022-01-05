#include <stdio.h>
#include <conio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"ptb");
    int a,b;
	float c;
    char s;
    printf("Informe dois números inteiros:\n");
    scanf("%d%d", &a,&b);
    printf("escolha a operação a ser feita:\n+ Adição\n- Subtração\n* Multiplicação\n/ Divisão\n");
    scanf("%s", &s);
    if(s=='s'){
    	c=a+b;
    	printf("ADIÇÃO: %.2f", c);
    }else if(s== '-'){
    	c=a-b;
    	printf("Subtração: %.2f", c);
	}else if(s=='*'){
		c=a*b;
		printf("Multiplicação: %.2f", c);
	}else if(s=='/'){
		if(b!=0){
		c=a/b;
		printf("DIVISÃO: %.2f", c);
	}else
		printf("O segundo número deve ser diferente de zero");
	}else
	printf("Operação Inválida");
    	
	  



getch();
return 0;
}

