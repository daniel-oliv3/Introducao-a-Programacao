#include <stdio.h>
#include <conio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"ptb");
    int a,b;
	float c;
    char s;
    printf("Informe dois n�meros inteiros:\n");
    scanf("%d%d", &a,&b);
    printf("escolha a opera��o a ser feita:\n+ Adi��o\n- Subtra��o\n* Multiplica��o\n/ Divis�o\n");
    scanf("%s", &s);
    if(s=='s'){
    	c=a+b;
    	printf("ADI��O: %.2f", c);
    }else if(s== '-'){
    	c=a-b;
    	printf("Subtra��o: %.2f", c);
	}else if(s=='*'){
		c=a*b;
		printf("Multiplica��o: %.2f", c);
	}else if(s=='/'){
		if(b!=0){
		c=a/b;
		printf("DIVIS�O: %.2f", c);
	}else
		printf("O segundo n�mero deve ser diferente de zero");
	}else
	printf("Opera��o Inv�lida");
    	
	  



getch();
return 0;
}

