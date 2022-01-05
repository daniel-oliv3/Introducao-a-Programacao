#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main () {
    
    int a,b;
    float p;
    
    printf("\ninforme dois numeros: ");
    scanf("%d%d",&a,&b);
    p=pow(a,b);
    printf("\n%d elevado a %d %c: %f",a,b,130,p);
    p=pow(b,a);
    printf("\n%d elevado a %d %c: %f\n",b,a,130,p);
    system("pause");
}
