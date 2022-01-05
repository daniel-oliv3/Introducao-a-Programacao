#include <stdio.h>
#include <conio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"ptb");
    int a;
    printf("escolha entre\n1\t2\t3\t4");
    scanf("%d", &a);
    switch(a){
    	case 1:
    		printf("execute 1"); break;
    	case 2:
    		printf("execute 2"); break;
    	case 3:
    		printf("execute 3"); break;
    	case 4:
    		printf("execute 4"); break;
    	default :
    		printf("nao vai dar nao");
	}

getch();
return 0;

}

