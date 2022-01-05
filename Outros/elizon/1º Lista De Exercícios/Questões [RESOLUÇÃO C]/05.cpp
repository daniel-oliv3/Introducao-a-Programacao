#include<stdio.h>
#include<stdlib.h>

int main() {
    float r,d;
    
    printf("\ndigite uma quantia em real: R$ ");
    scanf("%f",&r);
    d=r/1.80;//fonte: dolarhoje.com
    printf("\nessa quantia equivale a US$ %f dolares\n",d);
    system("pause");
}
