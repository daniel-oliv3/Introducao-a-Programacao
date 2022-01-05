#include <stdio.h>
#include <conio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"ptb");
    float a,b,c;
    printf("Informe seu peso em kg e sua altura em metros\n");
    scanf("%f%f", &a,&b);
    c=a/(b*b);
    if(c>=0&&c<18.5)
    	printf("Abaixo do peso");
    else if(c>=18.5&&c<=24.9)
    	printf("No peso ideal");
    else if(c>=25&&c<=29.9)
    	printf("Acima do peso");
    else if(c>=30&&c<=39.9)
    	printf("Obesidade de grau I");
    else if(c>=35&&c<=39.9)
    	printf("Obesidade de grau II");
    else if(c>=40)
    	printf("Obesidade de grau III");
    else
    	printf("Valor invalido");

getch();
return 0;
}

