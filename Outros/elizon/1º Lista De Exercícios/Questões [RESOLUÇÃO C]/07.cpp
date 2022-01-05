#include<stdio.h>
#include<stdlib.h>
int main () {
    float a,b,c,x;
    
    printf("\ndigite tres notas: ");
    scanf("%f%f%f",&a,&b,&c);
    x=(a+b+c)/3;
    printf("\na media ponderada %c: %f\n",130,x);
    system("pause");
}
