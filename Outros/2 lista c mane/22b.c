#include <stdio.h>
#include <conio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"ptb");
    int a,b;
	float c;
    char s;
    printf("Informe dois n�meros inteiros:\n ");
    scanf("%d%d", &a,&b);
    printf("escolha a opera��o a ser feita:\n+ Adi��o\n- Subtra��o\n* Multiplica��o\n/ Divis�o\n");
    scanf("%s", &s);
    switch(s){
    	case '+':
    		c=a+b;
    		printf("Adi��o: %.2f", c);break;
    	case '-':
    		c=a-b;
    		printf("Subtra��o: %.2f", c);break;
    	case '*':
    		c=a*b;
    		printf("Multiplica��o: %.2f", c);break;
    	case '/':
    		if(b!=0){
			c=a/b;
    		printf("Divis�o: %.2f", c);break;
    	}else
    		printf("O segundo n�mero deve ser diferente de zero");break;
    	default:
    		printf("Opera��o Inv�lida");break;
	}



getch();
return 0;
}

