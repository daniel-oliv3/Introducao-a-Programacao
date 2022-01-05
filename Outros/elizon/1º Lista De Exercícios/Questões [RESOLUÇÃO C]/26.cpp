#include<stdio.h>
#include<stdlib.h>

int main () {
    
    int a,b;
    
    printf("\ndigite o numero de lados de um poligono convexo: ");
    scanf("%d",&a);
    b=a*(a-3)/2;
    printf("\no numero de diagonais desse poligono %c: %d\n",130,b);
    system("pause");
}
