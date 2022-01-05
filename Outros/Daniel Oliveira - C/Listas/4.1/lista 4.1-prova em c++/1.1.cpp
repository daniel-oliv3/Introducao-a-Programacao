#include<stdio.h>
#include<conio.h>
int main(){
	float n,s,aux1,aux2;
	int i;
	printf("\nDigitebo valor e n: ");
	scanf("%d",&n);
	s=1/n;
	for(i=1 ; i<=n ; i++)
	aux1=i;
	aux2=n-1;
	s=s+aux1;
	
	printf("\na soma e %.2f", s);
	
	
	
		
	
	return 0;
}




