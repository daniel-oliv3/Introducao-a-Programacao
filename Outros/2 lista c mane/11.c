#include <stdio.h>
#include <conio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"ptb");
    float a,b,x,x1;
    printf("Informe o valor do carro: ");
    scanf("%f",&a);
    printf("Informe o valor que se deseja dar de entrada: ");
    scanf("%f",&b);
    x=100*b/a;
    if(x>=50 && x<100){
    x=a-b;
    x1=x/60;    
    printf("Valor da parcela: %.2f", x1);
}else
printf("Entrada insuficiente para parcelamento sem juros");


getch();
return 0;

}

