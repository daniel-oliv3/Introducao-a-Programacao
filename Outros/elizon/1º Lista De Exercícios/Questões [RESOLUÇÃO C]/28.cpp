#include<stdio.h>
#include<stdlib.h>

int main () {
    
    float a;
    
    printf("\nDigite uma medida em p%cs: ",130);
    scanf("%f",&a);
    printf("\nEssa medida em polegadas %c: %f",130,a*12);
    printf("\nEssa medida em jardas %c: %f",130,a/3);
    printf("\nEssa medida em milhas %c: %f\n",130,a/5.28);
    system("pause");
}
