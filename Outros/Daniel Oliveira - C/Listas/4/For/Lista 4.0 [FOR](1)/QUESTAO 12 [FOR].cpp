#include <stdio.h> 
#include <stdlib.h> 

int main(){ 
int n,i,fat,var; 
printf ("escreva um numero qualquer: "); 
scanf("%d",&n); 
fat=1; 
var=0; 
for (i=1;i<=n;i++){ 
fat=fat*i; 
var++; 
printf("%d --> %d\n",var,fat); 
} 
system("pause"); 
} 
