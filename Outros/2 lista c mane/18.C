#include <stdio.h>
#include <conio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"ptb");
    float he,h,p;
    printf("Informe o n�mero de horas extras: ");
    scanf("%f", &he);
    if(he>=0){
    printf("Informe o n�mero de horas que o funcion�rios faltou ao trabalho: ");
    scanf("%f", &h);
    if(h>=0){
    he=he-(2/3*h);
    he*60;
	if(he==0 && he<600)
		p=100;
	else if(he>=600 && he<1200)
		p=200;
	else if(he>=1200 && he<=1800)
		p=300;
	else if(he>1800 && he<2400)
		p=400;
	else if(he>=2400)
		p=500;
	else
		printf("Faltas em excesso");
}else
printf("Dado Inv�lido(Somente n�meros positivos)");
}else
printf("Dado Inv�lido(Somente n�meros positivos)");

getch();
return 0;
}

