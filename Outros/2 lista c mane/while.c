#include <stdio.h>
#include <conio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"ptb");
    int a,s;
    a=1;
    s=a;
    do{
    	printf("%d\n", s);
    a=a+1;
    s=s+a;
	}while(s<10);



getch();
return 0;
}

