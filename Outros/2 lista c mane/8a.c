#include <stdio.h>
#include <conio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"ptb");
	int a,b,c,d,maior,intermediario,intermediario2,menor;
    printf("Informe 4 números:\n");
    scanf("%d%d%d%d", &a,&b,&c,&d);
    if(a>b){
    	if(a>c)
    		if(a>d)
    		maior=a;
	}
	printf("%d", maior);


}

