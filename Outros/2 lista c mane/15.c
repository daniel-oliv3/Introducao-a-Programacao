#include <stdio.h>
#include <conio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"ptb");
    float s,x;
    printf("Informe seu saldo médio:\n");
    scanf("%f", &s);
    if(s>=0){
    printf("Saldo médio: %.2f", s);
    if(s<200)
    	x=s*0.1;
    else if(s>=200&&s<300)
    	x=s*0.2;
    else if(s>=300&&s<400)
    	x=s*0.25;
    else
    	x=s*0.3;
    printf("\nValor do crédito: %.2f", x);
    	
    }else
    	printf("Sem direito a crédito");



getch();
return 0;

}

