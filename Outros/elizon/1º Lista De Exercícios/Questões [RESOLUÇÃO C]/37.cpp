#include<stdio.h>
#include<stdlib.h>
int main(){
	int P,M,G,V;
	printf("Quantidade de camisas p: ");
	scanf("%d,",&P);
	printf("Quantidade de camisas m: ");
	scanf("%d",&M);
	printf("Quantidade de camisas g: ");
	scanf("%d",&G);
	V=P*10+M*12+G*15;
	printf("O valor arrecadado sera: %d\n",V);
	
	system("pause");
	return 0;
	
}
	

