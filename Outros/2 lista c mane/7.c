#include <stdio.h>
#include <conio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"ptb");
    float s;
    printf("Informe o salário: ");
    scanf("%f", &s);
    if(s<=600 && s>0)
    printf("Isento");
    else
    if(s>600 && s<=1200)
    printf("20%% de INSS");
    else
    if(s>1200 && s<=2000)
    printf("25%% de INSS");
    else
    if(s>2000)
    printf("30%% de INSS");
    else
    printf("Salário invalido");

getch();
return 0;
}

