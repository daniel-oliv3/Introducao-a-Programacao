#include <stdio.h>
#include <conio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"ptb");
    float a,b,x;
	int s;
    printf("Informe dois n�meros\n");
    scanf("%f%f", &a,&b);
    printf("1-MEDIA\n2-DIFEREN�A DO MAIOR PELO MENOR\n3-PRODUTO\n4-DIVIS�O DO PRIMEIRO PELO SEGUNDO\n");
    scanf("%d",&s);
    switch(s){
    	case 1:
    		x=(a+b)/2;
    		printf("M�DIA: %.2f", x);break;
    	case 2:
    		if(a>b)
    			printf("DIFEREN�A: %.2f", a-b);
    		else
    			printf("DIFEREN�A: %.2f", b-a);break;
    	case 3:
    		printf("PRODUTO: %.2f", a*b);break;
    	case 4:
    		printf("DIVIS�O DO PRIMEIRO PELO SEGUNDO: %.2f", a/b);break;
    	default:
    		printf("OPERA��O INEXISTENTE");
    		
	}
    



getch();
return 0;
}

