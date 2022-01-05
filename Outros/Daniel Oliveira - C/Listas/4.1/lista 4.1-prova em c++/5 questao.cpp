#include <conio.h>
#include <stdio.h>
#include<locale.h>
#include <stdlib.h>
int main (){
	setlocale(LC_ALL,"ptb");
	int A1,A2,A,I;
	printf("\nInforme dois valores:\n");
	scanf("%d%d",&A1,&A2);
	printf(A1,"-",A2, A1*A2);
	for( I=3 ; I <= 10 ; I++){
                       if(I%2==0){
                                  A=A1-A2;
                       }else{
                             A=A2+A1;
                       }
    A1=A2;
    A2=A;
    printf("-",A);
}                                    
    getch();
    return(0);
}
