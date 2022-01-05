#include<stdio.h>
#include<stdlib.h>

int main() 
{
    char p1nome[30],p2nome[30],p3nome[30],p4nome[30],p5nome[30];
    float p1preco,p2preco,p3preco,p4preco,p5preco;
    float p1perc,p2perc,p3perc,p4perc,p5perc;
    float p1pcd,p2pcd,p3pcd,p4pcd,p5pcd,total;
    
    printf("\nDigite o nome, o preco e o percentual de desconto do primeiro produto respectivamente:\n");
    scanf("%s%f%f",&p1nome,&p1preco,&p1perc);
    p1pcd=p1preco-(p1preco*p1perc/100);
    
    printf("\nDigite o nome, o preco e o percentual de desconto do segundo produto respectivamente:\n");
    scanf("%s%f%f",&p2nome,&p2preco,&p2perc);
    p2pcd=p2preco-(p2preco*p2perc/100);
    
    printf("\nDigite o nome, o preco e o percentual de desconto do terceiro produto respectivamente:\n");
    scanf("%s%f%f",&p3nome,&p3preco,&p3perc);
    p3pcd=p3preco-(p3preco*p3perc/100);
    
    printf("\nDigite o nome, o preco e o percentual de desconto do quarto produto respectivamente:\n");
    scanf("%s%f%f",&p4nome,&p4preco,&p4perc);
    p4pcd=p4preco-(p4preco*p4perc/100);
    
    printf("\nDigite o nome, o preco e o percentual de desconto do quinto produto respectivamente:\n");
    scanf("%s%f%f",&p5nome,&p5preco,&p5perc);
    p5pcd=p5preco-(p5preco*p5perc/100);
        
    printf("\n\t O %s era de %.2f e agora fica por %.2f\n",p1nome,p1preco,p1pcd);
    printf("\n\t O %s era de %.2f e agora fica por %.2f\n",p2nome,p2preco,p2pcd);
    printf("\n\t O %s era de %.2f e agora fica por %.2f\n",p3nome,p3preco,p3pcd);
    printf("\n\t O %s era de %.2f e agora fica por %.2f\n",p4nome,p4preco,p4pcd);
    printf("\n\t O %s era de %.2f e agora fica por %.2f\n",p5nome,p5preco,p5pcd);
    
    total=p1pcd+p2pcd+p3pcd+p4pcd+p5pcd;
    printf("\n\tO total %c: %f\n\n",130,total);
    
    system("pause");
}
