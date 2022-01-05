#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main() {
	
    float i,m,imc;
    
    printf("\n digite sua altura: ");
    scanf("%f",&i);
    printf("\n digite seu peso: ");
    scanf("%f",&m);
    imc=pow(i,2);
    printf("\n seu imc %c: %f\n",130,m/imc);
    system("pause");
    
}
