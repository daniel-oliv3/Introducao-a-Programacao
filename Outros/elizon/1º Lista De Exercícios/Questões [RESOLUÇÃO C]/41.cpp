#include<stdio.h>
#include<stdlib.h>
int main(){
	int a,b,c;
	float R,S,D;
	printf("digite o primeiro numero");
	scanf("%d",&a);
	printf("digite o segundo numero");
	scanf("%d",&b);
	printf("digite o terceiro numero");
	scanf("%d",&c);
	R=(a+b)*2;
	S=(b+c)*2;
	D=(R+S)/2;
	printf("o resultado da expressao e : %f",D);
	
	system("pause");
	   return 0;
}
	
