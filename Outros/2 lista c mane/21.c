#include <stdio.h>
#include <conio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"ptb");
    float c,d,i;
    printf("Informe o custo de fábria: ");
    scanf("%f", &c);
    if(c>=0&&c<=12000){
		d=c*0.05;
		i=0;
	}else if(c>12000&&c<=25000){
		d=c*0.1;
		i=c*0.15;
	}else if(c>25000){
		d=c*0.15;
		i=c*0.1;
	}
	printf("Preço: %.2f", c+d+i);

getch();
return 0;
}

