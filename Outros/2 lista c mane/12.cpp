#include <stdio.h>
#include <conio.h>
int main(){

    int a, b, c, d, e, maior, menor;

    printf("\nDigite 5 numeros inteiros:\n");
    scanf("%d%d%d%d%d", &a,&b,&c,&d,&e);

    if(a>b){
        maior=a;
        menor=b;}
	else{
        maior=b;
        menor=a;}

    if(c>maior)
        maior=c;
    if(c<menor)
        menor=c;

    if(d>maior)
        maior=d;
    if(d<menor)
        menor=d;

    if(e>maior)
        maior=e;
    if(e<menor)
        menor=e;

    printf("\nO %d e maior valor", maior);
    printf("\nO %d e menor valor", menor);

	getch();
	return 0;
}

