#include <stdio.h>
#include <conio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"ptb");
    float a,x;
    printf("Informe o pre�o do produto: ");
    scanf("%f",&a);
    if(a>=0&&a<50)
    	a=a+a*0.05;
    else if(a>=50&&a<100)
		a=a+a*0.1;
	else if(a>100)
		a=a+a*0.15;
	else
		printf("Pre�o inv�lido");
	
	if(a>=0&&a<80)
    	printf("NOVO PRE�O: %.2f\nCLASSIFICA��O: Barato", a);
    else if(a>=80&&a<=120)
		printf("NOVO PRE�O: %.2f\nCLASSIFICA��O: Normal", a);
	else if(a>120&&a<=200)
		printf("NOVO PRE�O: %.2f\nCLASSIFICA��O: Caro", a);
	else if(a>200)
		printf("NOVO PRE�O: %.2f\nCLASSIFICA��O: Muito Caro", a);
    	
    

getch();
return 0;
}

