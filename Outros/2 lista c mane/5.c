#include <stdio.h>
#include <conio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"ptb");
    int a;
    printf("Siglas dos estados\n\n1.RJ\t2.SP\t3.AM\n\n4.PE\t5.BA");
    printf("\n\nInforme o número correspondente a sigla do seu estado: ");
    scanf("%d", &a);
    if(a==1)
    printf("\n-Carioca");
    else
    if(a==2)
    printf("\n-Paulista");
    else
    if(a==3)
    printf("\n-Amazonense");
    else
    if(a==4)
    printf("\n-Pernambucano");
    else
    if(a==5)
    printf("\n-Baiano");
    else
    printf("\n-Outros estados ou estado inválido");


getch();
return 0;
}

