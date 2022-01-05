#include<stdio.h>
#include<stdlib.h> 
int main()
{
float m1,m5,m10,mr1,m25,m50,total;
printf("Digite o numero de moedas de 1 centavo: ");
scanf("%f",&m1);
printf("Digite o numero de moedas de 5 centavo: ");
scanf("%f",&m5);
printf("Digite o numero de moedas de 10 centavo: ");
scanf("%f",&m10);
printf("Digite o numero de moedas de 25 centavo: ");
scanf("%f",&m25);
printf("Digite o numero de moedas de 50 centavo: ");
scanf("%f",&m50);
printf("Digite o numero de moedas de 1 Real: ");
scanf("%f",&mr1);
total=(m1*0.01)+(m5*0.05)+(m10*0.10)+(m25*0.25)+(m50*0.50)+(mr1*1.00); 
printf("O total de dinheiro e:%f reais",total);

system("pause");
return 0;

}
