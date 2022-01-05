#include <stdio.h>
#include <conio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"ptb");
    int a,Maior,Menor,i;
    for(i=1;i<=5;i++){
    printf("Informe um número: ");
    scanf("%d", &a);
    if(i==1){
    	Maior=a;
    	Menor=a;
	}else if(a>Maior)
		Maior=a;
	else if(a<Menor)
		Menor=a;
}
    printf("Maior: %d\nMenor: %d", Maior, Menor);
getch();
return 0;
}

