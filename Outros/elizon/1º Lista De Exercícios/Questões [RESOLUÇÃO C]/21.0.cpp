#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main () {
    
    float a,o,h,r;
    
    printf("\n informe os valores do cateto adjacente e oposto: ");
    scanf("%f%f",&a,&o);
    h=pow(a,2)+pow(o,2);
    printf("\no valor da hipotenusa %c: %f",130,h);
    r=pow(h,0.5);
    printf("\no valor da raiz quadrada %c: %f\n",130,r);
    system("pause");
}
