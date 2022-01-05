#include<stdio.h>
#include<conio.h>

int main() 
{
    char p1nome[30],p2nome[30],p3nome[30],p4nome[30],p5nome[30];
    float p1preco,p2preco,p3preco,p4preco,p5preco;
    float p1perc,p2perc,p3perc,p4perc,p5perc;
    float p1pcd,p2pcd,p3pcd,p4pcd,p5pcd,total;
    
    printf("\n Informe O Nome Do Primeiro Produto: ");
    scanf("%s",&p1nome);
    printf("\n Informe O Preco Do Primeiro Produto: ");
	scanf("%f",&p1preco);
	printf("\n Informe O Percentual De Desconto Do Primeiro Produto:  ");
	scanf("%f",&p1perc);
	
    p1pcd=p1preco-(p1preco*p1perc/100);
    
    printf("\n\n");
    
    printf("\n Informe O Nome Do Segundo Produto: ");
    scanf("%s",&p2nome);
    printf("\n Informe O Preco Do Segundo Produto: ");
	scanf("%f",&p2preco);
	printf("\n Informe O Percentual De Desconto Do Segundo Produto:  ");
	scanf("%f",&p2perc);
	
    p2pcd=p2preco-(p2preco*p2perc/100);
    
    printf("\n\n");
    
    printf("\n Informe O Nome Do Terceiro Produto: ");
    scanf("%s",&p3nome);
    printf("\n Informe O Preco Do Terceiro Produto: ");
	scanf("%f",&p3preco);
	printf("\n Informe O Percentual De Desconto Do Terceiro Produto:  ");
	scanf("%f",&p3perc);
	
    p3pcd=p3preco-(p3preco*p3perc/100);
    
    printf("\n\n");
    
    printf("\n Informe O Nome Do Quarto Produto: ");
    scanf("%s",&p4nome);
    printf("\n Informe O Preco Do Quarto Produto: ");
	scanf("%f",&p4preco);
	printf("\n Informe O Percentual De Desconto Do Quarto Produto:  ");
	scanf("%f",&p4perc);
	
    p4pcd=p4preco-(p4preco*p4perc/100);
    
    printf("\n\n");
    
    printf("\n Informe O Nome Do Quinto Produto: ");
    scanf("%s",&p5nome);
    printf("\n Informe O Preco Do Quinto Produto: ");
	scanf("%f",&p5preco);
	printf("\n Informe O Percentual De Desconto Do Quinto Produto:  ");
	scanf("%f",&p5perc);
	
    p5pcd=p5preco-(p5preco*p5perc/100);
    
    printf("\n\n");
    
    printf("\n\t O %s Era De %.2f Sera Agora Por %.2f ",p1nome,p1preco,p1pcd);
    printf("\n");
    printf("\n\t O %s Era De %.2f Sera Agora Por %.2f ",p2nome,p2preco,p2pcd);
    printf("\n");
    printf("\n\t O %s Era De %.2f Sera Agora Por %.2f ",p3nome,p3preco,p3pcd);
    printf("\n");
    printf("\n\t O %s Era De %.2f Sera Agora Por %.2f ",p4nome,p4preco,p4pcd);
    printf("\n");
    printf("\n\t O %s Era De %.2f Sera Agora Por %.2f ",p5nome,p5preco,p5pcd);
    printf("\n");
    
    total=p1pcd+p2pcd+p3pcd+p4pcd+p5pcd;
    printf("\n\t O Total Sera: R$ %.2f ",total);
    printf("\n");
    
    getch();
    return 0;
}
