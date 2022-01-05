#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <string.h>
int main(){
    setlocale(LC_ALL,"ptb");
    char a[15];
    printf("Informe a sigla do seu estado: ");
    scanf("%s", &a);
    if(strcmp("RJ",a)==0||strcmp("Rj",a)==0||strcmp("rj",a)==0)
    printf("\n-Carioca");
    else
    if(strcmp("SP",a)==0||strcmp("Sp",a)==0||strcmp("sp",a)==0)
    printf("\n-Paulista");
    else
    if(strcmp("AM",a)==0||strcmp("Am",a)==0||strcmp("am",a)==0)
    printf("\n-Amazonense");
    else
    if(strcmp("PE",a)==0||strcmp("Pe",a)==0||strcmp("pe",a)==0)
    printf("\n-Pernambucano");
    else
    if(strcmp("BA",a)==0||strcmp("Ba",a)==0||strcmp("ba",a)==0)
    printf("\n-Pernambucano");
    else
    printf("\n-Outros estados");
    

getch();
return 0;
}

