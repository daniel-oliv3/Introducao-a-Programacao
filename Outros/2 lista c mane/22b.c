#include <stdio.h>
#include <conio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"ptb");
    int a,b;
	float c;
    char s;
    printf("Informe dois números inteiros:\n ");
    scanf("%d%d", &a,&b);
    printf("escolha a operação a ser feita:\n+ Adição\n- Subtração\n* Multiplicação\n/ Divisão\n");
    scanf("%s", &s);
    switch(s){
    	case '+':
    		c=a+b;
    		printf("Adição: %.2f", c);break;
    	case '-':
    		c=a-b;
    		printf("Subtração: %.2f", c);break;
    	case '*':
    		c=a*b;
    		printf("Multiplicação: %.2f", c);break;
    	case '/':
    		if(b!=0){
			c=a/b;
    		printf("Divisão: %.2f", c);break;
    	}else
    		printf("O segundo número deve ser diferente de zero");break;
    	default:
    		printf("Operação Inválida");break;
	}



getch();
return 0;
}

