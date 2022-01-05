#include <stdio.h>
#include <conio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"ptb");
    int a,b,c,d,maior,intermediario1,intermediario2,menor;
    printf("Informe 4 números:\n");
    scanf("%d%d%d%d", &a,&b,&c,&d);
    if(a>b && b>c && c>d){
    	maior=a;
    	intermediario1=b;
    	intermediario2=c;
    	menor=d;
    	printf("%d - %d - %d- %d",menor,intermediario2,intermediario1,maior);
	}else if(a>b && b>d && d>c){
		maior=a;
    	intermediario1=b;
    	intermediario2=d;
    	menor=c;
    	printf("%d - %d - %d- %d",menor,intermediario2,intermediario1,maior);
	}else if(a>c && c>b &&b>d){
		maior=a;
    	intermediario1=c;
    	intermediario2=b;
    	menor=d;
    	printf("%d - %d - %d- %d",menor,intermediario2,intermediario1,maior);
	}else if(a>c && c>d && d>b){
		maior=a;
    	intermediario1=c;
    	intermediario2=d;
    	menor=b;
    	printf("%d - %d - %d- %d",menor,intermediario2,intermediario1,maior);
	}else if(a>d && d>c && c>b){
		maior=a;
    	intermediario1=d;
    	intermediario2=c;
    	menor=b;
    	printf("%d - %d - %d- %d",menor,intermediario2,intermediario1,maior);
	}else if(a>d && d>b && b>c){
		maior=a;
    	intermediario1=d;
    	intermediario2=b;
    	menor=c;
    	printf("%d - %d - %d- %d",menor,intermediario2,intermediario1,maior);
	}else if(b>a && a>c && c>d){
		maior=b;
    	intermediario1=a;
    	intermediario2=c;
    	menor=d;
    	printf("%d - %d - %d- %d",menor,intermediario2,intermediario1,maior);
	}else if(b>a && a>d && d>c){
		maior=b;
    	intermediario1=a;
    	intermediario2=d;
    	menor=c;
    	printf("%d - %d - %d- %d",menor,intermediario2,intermediario1,maior);
	}else if(b>c && c>a && a>d){
		maior=b;
    	intermediario1=c;
    	intermediario2=a;
    	menor=d;
    	printf("%d - %d - %d- %d",menor,intermediario2,intermediario1,maior);
	}else if(b>c && c>d && d>a){
		maior=b;
    	intermediario1=c;
    	intermediario2=d;
    	menor=a;
    	printf("%d - %d - %d- %d",menor,intermediario2,intermediario1,maior);
	}else if(b>d && d>c && c>a){
		maior=b;
    	intermediario1=d;
    	intermediario2=c;
    	menor=a;
    	printf("%d - %d - %d- %d",menor,intermediario2,intermediario1,maior);
	}else if(b>d && d>a && a>c){
		maior=b;
    	intermediario1=d;
    	intermediario2=a;
    	menor=c;
    	printf("%d - %d - %d- %d",menor,intermediario2,intermediario1,maior);
	}else if(c>a && a>b && b>d){
		maior=c;
    	intermediario1=a;
    	intermediario2=b;
    	menor=d;
    	printf("%d - %d - %d- %d",menor,intermediario2,intermediario1,maior);
	}else if(c>a && a>d && d>b){
		maior=c;
    	intermediario1=a;
    	intermediario2=d;
    	menor=b;
    	printf("%d - %d - %d- %d",menor,intermediario2,intermediario1,maior);
	}else if(c>b && b>a && a>d){
		maior=c;
    	intermediario1=b;
    	intermediario2=a;
    	menor=d;
    	printf("%d - %d - %d- %d",menor,intermediario2,intermediario1,maior);
	}else if(c>b && b>d && d>a){
		maior=c;
    	intermediario1=b;
    	intermediario2=d;
    	menor=a;
    	printf("%d - %d - %d- %d",menor,intermediario2,intermediario1,maior);
	}else if(c>d && d>b && b>a){
		maior=c;
    	intermediario1=d;
    	intermediario2=b;
    	menor=a;
    	printf("%d - %d - %d- %d",menor,intermediario2,intermediario1,maior);
	}else if(c>d && d>a && a>b){
		maior=c;
    	intermediario1=d;
    	intermediario2=a;
    	menor=b;
    	printf("%d - %d - %d- %d",menor,intermediario2,intermediario1,maior);
	}else if(d>a && a>b && b>c){
		maior=d;
    	intermediario1=a;
    	intermediario2=b;
    	menor=c;
    	printf("%d - %d - %d- %d",menor,intermediario2,intermediario1,maior);
	}else if(d>a && a>c && c>b){
		maior=d;
    	intermediario1=a;
    	intermediario2=c;
    	menor=b;
    	printf("%d - %d - %d- %d",menor,intermediario2,intermediario1,maior);
	}else if(d>b && b>a && a>c){
		maior=d;
    	intermediario1=b;
    	intermediario2=a;
    	menor=c;
    	printf("%d - %d - %d- %d",menor,intermediario2,intermediario1,maior);
	}else if(d>b && b>c && c>a){
		maior=d;
    	intermediario1=b;
    	intermediario2=c;
    	menor=a;
    	printf("%d - %d - %d- %d",menor,intermediario2,intermediario1,maior);
	}else if(d>c && c>a && a>b){
		maior=d;
    	intermediario1=c;
    	intermediario2=a;
    	menor=b;
    	printf("%d - %d - %d- %d",menor,intermediario2,intermediario1,maior);
	}else if(d>c && c>b && b>a){
		maior=d;
    	intermediario1=c;
    	intermediario2=b;
    	menor=a;
    	printf("%d - %d - %d- %d",menor,intermediario2,intermediario1,maior);
	}else
		printf("Valor Inválido(somente números)");

getch();
return 0;
}

