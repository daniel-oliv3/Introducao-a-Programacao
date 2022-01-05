#include <stdio.h>
#include <conio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"ptb");
    float a,v;
	printf("Informe seu salário bruto: ");
    scanf("%f", &a);
    if(a>=0 && a<=350){
    	v=(a+a*0.3)-(a*0.07);
    	printf("Valor a receber: %.2f", v);
    }else
    if(a>350 && a<=600){
    	v=(a+a*0.25)-(a*0.07);
    	printf("Valor a receber: %.2f", v);
	}else
	if(a>600 && a<=950){
		v=(a+a*0.2)-(a*0.07);
		printf("Valor a receber: %.2f", v);
	}else
	if(a>950){
		v=(a+a*0.15)-(a*0.07);
		printf("Valor a receber: %.2f", v);
	}else
		printf("Salário Invalido");    	

getch();
return 0;

}

