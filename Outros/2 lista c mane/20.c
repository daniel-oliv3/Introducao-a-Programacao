#include <stdio.h>
#include <conio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"ptb");
    float a,b,x;
	int s;
    printf("Informe dois números\n");
    scanf("%f%f", &a,&b);
    printf("1-MEDIA\n2-DIFERENÇA DO MAIOR PELO MENOR\n3-PRODUTO\n4-DIVISÃO DO PRIMEIRO PELO SEGUNDO\n");
    scanf("%d",&s);
    switch(s){
    	case 1:
    		x=(a+b)/2;
    		printf("MÉDIA: %.2f", x);break;
    	case 2:
    		if(a>b)
    			printf("DIFERENÇA: %.2f", a-b);
    		else
    			printf("DIFERENÇA: %.2f", b-a);break;
    	case 3:
    		printf("PRODUTO: %.2f", a*b);break;
    	case 4:
    		printf("DIVISÃO DO PRIMEIRO PELO SEGUNDO: %.2f", a/b);break;
    	default:
    		printf("OPERAÇÃO INEXISTENTE");
    		
	}
    



getch();
return 0;
}

